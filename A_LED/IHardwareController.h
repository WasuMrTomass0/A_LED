#pragma once
class IHardwareController
{
	unsigned m_num_leds;
	unsigned m_output_pin;

	// millis() - ile ms minê³o od startu
	// inne funkcje:
	// https://www.arduino.cc/reference/en/
public:
	virtual bool write_led() = 0;

	virtual bool update() = 0;
};
