//----------------------------------------------------------------------------------------
//--------------------- Test Simple transmission UART ------------------------------------
//----------------------------------------------------------------------------------------

// #include <HardwareSerial.h>

// #define SW_RX            16 // TMC2208/TMC2224 SoftwareSerial receive pin
// #define SW_TX            17 // TMC2208/TMC2224 SoftwareSerial transmit pin


// void setup() {
//  Serial.begin(115200);
//  Serial2.begin(115200,SERIAL_8N1,SW_RX,SW_TX);
//  Serial2.println("Send Message Serial2");
// }

// void loop() {
  
// }

//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------


// #include <TMC2209.h>


// // Instantiate TMC2209
// TMC2209 stepper_driver;

// HardwareSerial & serial_stream = Serial1;
// const long SERIAL_BAUD_RATE = 115200;
// const int DELAY = 3000;
// const int RX_PIN = 16;
// const int TX_PIN = 17;

// void setup()
// {
//   Serial.begin(SERIAL_BAUD_RATE);
//   stepper_driver.setup(serial_stream, SERIAL_BAUD_RATE, TMC2209::SERIAL_ADDRESS_0, RX_PIN, TX_PIN);
// }

// void loop()
// {
//   if (stepper_driver.isSetupAndCommunicating())
//   {
//     Serial.println("Stepper driver is setup and communicating!");
//     Serial.println("Try turning driver power off to see what happens.");
//   }
//   else if (stepper_driver.isCommunicatingButNotSetup())
//   {
//     Serial.println("Stepper driver is communicating but not setup!");
//     Serial.println("Running setup again...");
//     stepper_driver.setup(serial_stream);
//   }
//   else
//   {
//     Serial.println("Stepper driver is not communicating!");
//     Serial.println("Try turning driver power on to see what happens.");
//   }
//   Serial.println();
//   delay(DELAY);
// }

//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------

// #include <TMC2209.h>


// // Instantiate TMC2209
// TMC2209 stepper_driver;

// HardwareSerial & serial_stream = Serial1;
// const long SERIAL_BAUD_RATE = 115200;
// const int DELAY = 1000000;
// const int RX_PIN = 16;
// const int TX_PIN = 17;

// void setup()
// {
//   Serial.begin(SERIAL_BAUD_RATE);
//   stepper_driver.setup(serial_stream, SERIAL_BAUD_RATE, TMC2209::SERIAL_ADDRESS_0, RX_PIN, TX_PIN);
// }

// void loop()
// {
//   Serial.println("*************************");
//   Serial.println("getSettings()");
//   TMC2209::Settings settings = stepper_driver.getSettings();
//   Serial.print("settings.is_communicating = ");
//   Serial.println(settings.is_communicating);
//   Serial.print("settings.is_setup = ");
//   Serial.println(settings.is_setup);
//   Serial.print("settings.software_enabled = ");
//   Serial.println(settings.software_enabled);
//   Serial.print("settings.microsteps_per_step = ");
//   Serial.println(settings.microsteps_per_step);
//   Serial.print("settings.inverse_motor_direction_enabled = ");
//   Serial.println(settings.inverse_motor_direction_enabled);
//   Serial.print("settings.stealth_chop_enabled = ");
//   Serial.println(settings.stealth_chop_enabled);
//   Serial.print("settings.standstill_mode = ");
//   switch (settings.standstill_mode)
//   {
//     case TMC2209::NORMAL:
//       Serial.println("normal");
//       break;
//     case TMC2209::FREEWHEELING:
//       Serial.println("freewheeling");
//       break;
//     case TMC2209::STRONG_BRAKING:
//       Serial.println("strong_braking");
//       break;
//     case TMC2209::BRAKING:
//       Serial.println("braking");
//       break;
//   }
//   Serial.print("settings.irun_percent = ");
//   Serial.println(settings.irun_percent);
//   Serial.print("settings.irun_register_value = ");
//   Serial.println(settings.irun_register_value);
//   Serial.print("settings.ihold_percent = ");
//   Serial.println(settings.ihold_percent);
//   Serial.print("settings.ihold_register_value = ");
//   Serial.println(settings.ihold_register_value);
//   Serial.print("settings.iholddelay_percent = ");
//   Serial.println(settings.iholddelay_percent);
//   Serial.print("settings.iholddelay_register_value = ");
//   Serial.println(settings.iholddelay_register_value);
//   Serial.print("settings.automatic_current_scaling_enabled = ");
//   Serial.println(settings.automatic_current_scaling_enabled);
//   Serial.print("settings.automatic_gradient_adaptation_enabled = ");
//   Serial.println(settings.automatic_gradient_adaptation_enabled);
//   Serial.print("settings.pwm_offset = ");
//   Serial.println(settings.pwm_offset);
//   Serial.print("settings.pwm_gradient = ");
//   Serial.println(settings.pwm_gradient);
//   Serial.print("settings.cool_step_enabled = ");
//   Serial.println(settings.cool_step_enabled);
//   Serial.print("settings.analog_current_scaling_enabled = ");
//   Serial.println(settings.analog_current_scaling_enabled);
//   Serial.print("settings.internal_sense_resistors_enabled = ");
//   Serial.println(settings.internal_sense_resistors_enabled);
//   Serial.println("*************************");
//   Serial.println();

//   Serial.println("*************************");
//   Serial.println("hardwareDisabled()");
//   bool hardware_disabled = stepper_driver.hardwareDisabled();
//   Serial.print("hardware_disabled = ");
//   Serial.println(hardware_disabled);
//   Serial.println("*************************");
//   Serial.println();

//   Serial.println("*************************");
//   Serial.println("getStatus()");
//   TMC2209::Status status = stepper_driver.getStatus();
//   Serial.print("status.over_temperature_warning = ");
//   Serial.println(status.over_temperature_warning);
//   Serial.print("status.over_temperature_shutdown = ");
//   Serial.println(status.over_temperature_shutdown);
//   Serial.print("status.short_to_ground_a = ");
//   Serial.println(status.short_to_ground_a);
//   Serial.print("status.short_to_ground_b = ");
//   Serial.println(status.short_to_ground_b);
//   Serial.print("status.low_side_short_a = ");
//   Serial.println(status.low_side_short_a);
//   Serial.print("status.low_side_short_b = ");
//   Serial.println(status.low_side_short_b);
//   Serial.print("status.open_load_a = ");
//   Serial.println(status.open_load_a);
//   Serial.print("status.open_load_b = ");
//   Serial.println(status.open_load_b);
//   Serial.print("status.over_temperature_120c = ");
//   Serial.println(status.over_temperature_120c);
//   Serial.print("status.over_temperature_143c = ");
//   Serial.println(status.over_temperature_143c);
//   Serial.print("status.over_temperature_150c = ");
//   Serial.println(status.over_temperature_150c);
//   Serial.print("status.over_temperature_157c = ");
//   Serial.println(status.over_temperature_157c);
//   Serial.print("status.current_scaling = ");
//   Serial.println(status.current_scaling);
//   Serial.print("status.stealth_chop_mode = ");
//   Serial.println(status.stealth_chop_mode);
//   Serial.print("status.standstill = ");
//   Serial.println(status.standstill);
//   Serial.println("*************************");
//   Serial.println();

//   Serial.println();
//   delay(DELAY);
// }

//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------

#include <TMC2209.h>


// Instantiate TMC2209
TMC2209 stepper_driver;

HardwareSerial & serial_stream = Serial1;
const long SERIAL_BAUD_RATE = 115200;
const int DELAY = 2000;
const int RX_PIN = 16;
const int TX_PIN = 17;

const int32_t VELOCITY = 40000;
// current values may need to be reduced to prevent overheating depending on
// specific motor and power supply voltage
const uint8_t RUN_CURRENT_PERCENT = 100;

void setup()
{
  Serial.begin(SERIAL_BAUD_RATE);
  stepper_driver.setup(serial_stream, SERIAL_BAUD_RATE, TMC2209::SERIAL_ADDRESS_0, RX_PIN, TX_PIN);

  delay(DELAY);

  stepper_driver.setRunCurrent(RUN_CURRENT_PERCENT);
  stepper_driver.enableCoolStep();
  stepper_driver.enable();
  stepper_driver.moveAtVelocity(VELOCITY);
}

void loop()
{
  if (not stepper_driver.isSetupAndCommunicating())
  {
    Serial.println("Stepper driver not setup and communicating!");
    return;
  }

  bool hardware_disabled = stepper_driver.hardwareDisabled();
  TMC2209::Settings settings = stepper_driver.getSettings();
  TMC2209::Status status = stepper_driver.getStatus();

  if (hardware_disabled)
  {
    Serial.println("Stepper driver is hardware disabled!");
  }
  else if (not settings.software_enabled)
  {
    Serial.println("Stepper driver is software disabled!");
  }
  else if ((not status.standstill))
  {
    Serial.print("Moving at velocity ");
    Serial.println(VELOCITY);

    uint32_t interstep_duration = stepper_driver.getInterstepDuration();
    Serial.print("which is equal to an interstep_duration of ");
    Serial.println(interstep_duration);
  }
  else
  {
    Serial.println("Not moving, something is wrong!");
  }

  Serial.println();
  delay(DELAY);
}