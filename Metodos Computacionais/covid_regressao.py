import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error, r2_score

df = pd.read_csv(
    r"C:\Users\dudam\OneDrive\Documentos\GitHub\Ciencia-da-Computacao\Metodos Computacionais\owid-covid-data.csv")

df = df[df['continent'].notna()]

df = df[['location', 'date', 'people_fully_vaccinated_per_hundred',
         'new_cases_smoothed_per_million']]
df = df.dropna()

df_grouped = df.groupby('location').agg({
    'people_fully_vaccinated_per_hundred': 'mean',
    'new_cases_smoothed_per_million': 'mean'
}).reset_index()

plt.figure(figsize=(10, 6))
sns.scatterplot(data=df_grouped,
                x='people_fully_vaccinated_per_hundred',
                y='new_cases_smoothed_per_million')
plt.xlabel('População totalmente vacinada (%)')
plt.ylabel('Novos casos por milhão (média)')
plt.title('Vacinação vs Novos Casos de COVID por País (média histórica)')
plt.grid(True)
plt.tight_layout()
plt.savefig('grafico_dispersao.png')
plt.show()

#  Aplicando regressão linear
X = df_grouped[['people_fully_vaccinated_per_hundred']]
y = df_grouped['new_cases_smoothed_per_million']

modelo = LinearRegression()
modelo.fit(X, y)

coef = modelo.coef_[0]
intercepto = modelo.intercept_
r2 = r2_score(y, modelo.predict(X))
mse = mean_squared_error(y, modelo.predict(X))

print("Regressão Linear:")
print(f"Coeficiente angular (inclinação): {coef:.4f}")
print(f"Intercepto: {intercepto:.2f}")
print(f"R² (coeficiente de determinação): {r2:.4f}")
print(f"Erro quadrático médio (MSE): {mse:.2f}")


y_pred = modelo.predict(X)

plt.figure(figsize=(12, 6))
plt.scatter(X, y, alpha=0.6, label='Dados reais')
plt.plot(X, y_pred, color='red', linewidth=2, label='Regressão Linear')
plt.title("Vacinação vs Novos Casos de COVID por País (média histórica)")
plt.xlabel("População totalmente vacinada (%)")
plt.ylabel("Novos casos por milhão (média)")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.savefig("grafico_regressao_covid.png")
plt.close()

df_grouped['predicted_cases_per_million'] = y_pred
df_grouped['residual'] = df_grouped['new_cases_smoothed_per_million'] - y_pred

df_grouped = df_grouped.round({
    'people_fully_vaccinated_per_hundred': 2,
    'new_cases_smoothed_per_million': 2,
    'predicted_cases_per_million': 2,
    'residual': 2
})

df_grouped.to_csv("resultado_regressao_covid.csv", index=False)
print("Resultado salvo como 'resultado_regressao_covid.csv'")
