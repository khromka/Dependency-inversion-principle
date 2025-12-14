#include "Notification.cpp"
#include "EmailSender.cpp"
#include "SmsSender.cpp"

int main() {
    auto emailSender = std::make_shared<EmailSender>();
    auto smsSender   = std::make_shared<SmsSender>();

    Notification emailNotification(emailSender);
    Notification smsNotification(smsSender);

    emailNotification.notify("Hello via Email!");
    smsNotification.notify("Hello via SMS!");

    return 0;
}
