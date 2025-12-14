# Dependency Inversion Principle (DIP) in C++

## Опис
Принцип інверсії залежностей (DIP) каже:
- Модулі високого рівня не повинні залежати від модулів низького рівня.
- Обидва повинні залежати від абстракцій.

## Приклад
У цьому репозиторії:
- `IMessageSender` — абстракція для відправки повідомлень
- `EmailSender` та `SmsSender` — конкретні реалізації
- `Notification` — високорівневий клас, який залежить лише від абстракції

## Запуск
```bash
mkdir build && cd build
cmake ..
make
./DependencyInversion
