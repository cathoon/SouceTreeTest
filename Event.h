#pragma once
class Event
{
public:
	//�̺�Ʈ�� �����Ҷ� ������ �Լ�
	virtual void EventStart() = 0;
	//�̺�Ʈ ������Ʈ
	virtual bool EventUpdate() = 0;

};

class StopCamera : public Event
{

public:

	void EventStart()override;
	bool EventUpdate()override;
};