#include "IMessageSender.h"
#include <memory>
#include <string>

class Notification {
    std::shared_ptr<IMessageSender> sender;
public:
    Notification(std::shared_ptr<IMessageSender> s) : sender(s) {}

    void notify(const std::string& message) {
        sender->sendMessage(message);
    }
};
