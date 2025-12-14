#pragma once
#include <string>

class IMessageSender {
public:
    virtual ~IMessageSender() = default;
    virtual void sendMessage(const std::string& message) = 0;
};
