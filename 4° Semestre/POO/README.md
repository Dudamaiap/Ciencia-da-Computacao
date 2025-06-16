# Introdução a Orientação a Objetos

Este repositório contém os exemplos e exercícios desenvolvidos ao longo da disciplina de Programação Orientada a Objetos (POO). A POO é um paradigma de programação que utiliza "objetos" e suas interações para resolver problemas. Este repositório aborda os seguintes tópicos fundamentais da POO:

## Tópicos Abordados

### 1. Classes e Objetos

A classe é um modelo ou template que define as propriedades (atributos) e comportamentos (métodos) de um tipo de objeto. Objetos são instâncias de uma classe e representam entidades do mundo real ou conceitos definidos pelo programador.

**Exemplo:**

```java
public class Carro {
    String modelo;
    int ano;

    public void ligar() {
        System.out.println("O carro está ligado.");
    }
}
```

### 2. Comunicação entre Classes

Objetos de diferentes classes podem se comunicar, passando informações entre si. Para isso, é necessário que as classes tenham métodos públicos que permitam essa interação.

**Exemplo:**

```java
public class Motor {
    public void ligar() {
        System.out.println("Motor ligado.");
    }
}

public class Carro {
    Motor motor = new Motor();

    public void ligarCarro() {
        motor.ligar();
        System.out.println("Carro ligado.");
    }
}
```

### 3. Coesão e Acoplamento

- **Coesão** refere-se ao grau em que as responsabilidades de uma classe estão relacionadas entre si. Uma classe altamente coesa tem métodos que estão diretamente relacionados ao seu propósito.
- **Acoplamento** refere-se ao grau de dependência entre as classes. Um baixo acoplamento é desejável, pois facilita a manutenção do código.

### 4. Encapsulamento

O encapsulamento é o conceito de esconder os detalhes internos de uma classe, expondo apenas o necessário. Isso é feito usando modificadores de acesso como `private`, `protected`, e `public` para controlar a visibilidade dos atributos e métodos.

**Exemplo:**

```java
public class ContaBancaria {
    private double saldo;

    public void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
        }
    }

    public double getSaldo() {
        return saldo;
    }
}
```

### 5. Método Construtor

O construtor é um método especial usado para inicializar objetos quando são criados. Ele é chamado automaticamente quando um objeto é instanciado.

**Exemplo:**

```java
public class Pessoa {
    String nome;
    int idade;

    // Construtor
    public Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }
}
```

### 6. Herança

A herança permite que uma classe herde atributos e métodos de outra. Isso promove o reuso de código e estabelece uma hierarquia entre classes.

**Exemplo:**

```java
public class Animal {
    public void fazerSom() {
        System.out.println("Som de animal");
    }
}

public class Cachorro extends Animal {
    @Override
    public void fazerSom() {
        System.out.println("Latido");
    }
}
```

### 7. Sobrecarga e Sobrescrita de Métodos

- **Sobrecarga** ocorre quando um método tem o mesmo nome, mas parâmetros diferentes.
- **Sobrescrita** ocorre quando um método na classe filha redefine o comportamento de um método na classe pai.

**Exemplo de sobrecarga:**

```java
public class Calculadora {
    public int somar(int a, int b) {
        return a + b;
    }

    public double somar(double a, double b) {
        return a + b;
    }
}
```

**Exemplo de sobrescrita:**

```java
public class Animal {
    public void fazerSom() {
        System.out.println("Som de animal");
    }
}

public class Gato extends Animal {
    @Override
    public void fazerSom() {
        System.out.println("Miau");
    }
}
```

```

```
