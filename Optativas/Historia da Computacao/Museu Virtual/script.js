document.addEventListener('DOMContentLoaded', () => {
  // Adiciona navegação por teclado
  document.querySelectorAll('.container').forEach(container => {
    container.setAttribute('tabindex', '0');
  });

  // Navegação por teclado
  document.addEventListener('keydown', (e) => {
    const activeElement = document.activeElement;
    const timelineItems = Array.from(document.querySelectorAll('.container'));
    const currentIndex = timelineItems.findIndex(item => item.contains(activeElement));

    if (e.key === 'ArrowDown' && currentIndex < timelineItems.length - 1) {
      e.preventDefault();
      timelineItems[currentIndex + 1].focus();
      timelineItems[currentIndex + 1].scrollIntoView({
        behavior: 'smooth',
        block: 'nearest'
      });
    } else if (e.key === 'ArrowUp' && currentIndex > 0) {
      e.preventDefault();
      timelineItems[currentIndex - 1].focus();
      timelineItems[currentIndex - 1].scrollIntoView({
        behavior: 'smooth',
        block: 'nearest'
      });
    } else if (e.key === 'Enter' || e.key === ' ') {
      e.preventDefault();
      activeElement.click();
    }
  });

  // Remove a animação de loading
  document.body.classList.remove('loading');
});
