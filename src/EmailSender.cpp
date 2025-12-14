#include "IMessageSender.h"
#include <iostream>

class EmailSender : public IMessageSender {
public:
    void sendMessage(const std::string& message) override {
        std::cout << "Sending Email: " << message << std::endl;
    }
};
