# Braking Light AUTOSAR Project (Version 1.0)

## Description
This project represents the first version of the **Braking Light AUTOSAR** system. It is designed to simulate and control the braking light functionality in a vehicle using AUTOSAR standards in Simulink. The project is divided into several components, including models for the brake actuator, pedal sensor, throttle sensor, and the brake controller.

### **Note**: 
This is not the final version of the project, but it works well and provides a functional demonstration of the braking light control system. Future versions will contain optimizations and additional functionality.

## Project Structure

The project is organized into the following folders:

- **Models/**: Contains the Simulink models for the various components of the braking system, such as:
  - `my_brake_actuator.slx`: The model for the brake actuator.
  - `my_brake_controller.slx`: The model for controlling the braking light system.
  - `my_brake_pedal_sensor.slx`: The model for the brake pedal sensor.
  - `my_brake_throttle_sensor.slx`: The model for the throttle sensor.
  - `my_brake_system.slx`: The complete braking light system.
  - `new_my_brake_system.slx`: An alternate or updated version of the braking light system.

- **Caches/**: Simulink cache files for faster loading of the models.

- **Data/**: Contains data dictionaries and requirements files:
  - `interfaces.sldd`: Simulink Data Dictionary for the project.
  - `PedalInputData.mat`: MATLAB data file for pedal inputs.
  - `brake_Requirements.slreqx`: Simulink Requirements data.

- **Media/**: Contains images and media files related to the project.

## Tools and Languages

- **MATLAB 2023a**
- **Simulink**
- **Simulink Simscape**
- **Simulink AUTOSAR Blockset**
- **Simulink Desktop Real-Time**

## Installation Instructions

1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com/yourusername/BrakingLight_AUTOSAR.git
2.Open MATLAB and ensure that your MATLAB path is set to the directory where the repository was cloned.

3.Load the Data Dictionary file (interfaces.sldd) and the necessary models:

4.Open my_brake_system.slx or new_my_brake_system.slx to load the complete braking system.
To interactively simulate the system, open the Simulink model and run it in Simulink.

If desired, generate AUTOSAR code by using Simulink Code Generator for your hardware implementation.

## Project Architecture and Simulation
1. Architecture and Software Components (SWCs)
This diagram shows the architecture and SWCs of the braking light AUTOSAR system, detailing the components such as the brake actuator, pedal sensor, throttle sensor, and the brake controller.


2. Simulation Results
Below is an image showing the simulation results of the braking light AUTOSAR system.
 
## Open to Development

This is the first version of the braking light AUTOSAR project, and I am open to collaboration and suggestions for improvement. Feel free to open issues or contribute to future versions.
