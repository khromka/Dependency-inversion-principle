#include "IMessageSender.h"
#include <iostream>

class SmsSender : public IMessageSender {
public:
    void sendMessage(const std::string& message) override {
        std::cout << "Sending SMS: " << message << std::endl;
    }
};
