#pragma once

class IObserver {
public:
    virtual ~IObserver() = 0;

    virtual void isEmpty(int id) = 0;
};

inline IObserver::~IObserver() = default;