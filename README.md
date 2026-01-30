# Project-PulseFire
## 📌 Overview

<p align="justify">
Purpose : For entry to the upcoming event of ECES-IECEP UE-Caloocan Campus named "ASICUP" competition and also for my final project in final term in Communication 2 laboratory
</p>

<p align="justify">
The PulseFire project was designed as a wireless-controlled embedded system that integrates a graphical user interface (GUI) and Wi-Fi connectivity to enable real-time control and monitoring. The GUI serves as the user interaction layer, allowing intuitive command input and system visualization, while the Wi-Fi connectivity enables reliable wireless communication between the controller and the embedded hardware. This combination demonstrates the practical application of digital communication concepts, user-interface design, and wireless data transmission in a single functional prototype.
</p>

## Table of Contents



## Part 1: Planning

<p align ="justify">
The planning phase focuses on defining the overall system structure and ensuring proper integration of all hardware components before actual implementation. This stage includes the preparation of the schematic diagram and circuit diagram to clearly visualize power distribution, signal flow, and component interconnections. Through careful planning, potential design errors are minimized, system reliability is improved, and the development process becomes more efficient and organized.
</p>

### 1.0 Schematic Diagram
<details>
  <summary> Press the button </summary>
    <img width="857" height="480" alt="image" src="https://github.com/user-attachments/assets/86e033e8-0111-4387-b61f-3dfe4d2ad9b7" />
    <p align="center">
      <em> Figure 1.0.0 </em>
    </p>

</details>

### 1.1 Circuit Diagram
<details>
  <summary> Press the button </summary>
    <img width="1252" height="808" alt="image" src="https://github.com/user-attachments/assets/49e3aadb-1578-46aa-9c0d-79d1fbf6ead5" />
    <p align = "center">
      <em> Figure 1.1.0 </em>
    </p>
</details>

### 1.2 Prototyping 
<details>
  <summary> Press the button </summary>
    <img width="970" height="536" alt="image" src="https://github.com/user-attachments/assets/b3a97230-4e10-4306-8ea2-70382db6391c" />
    <p align = "center">
      <em> Figure 1.2.0 </em>
    </p>

</details>
  
## Part 2: Troubleshooting & Testing 

### 2.1 Hardware Test
| Issue / Problem | Possible Cause | Testing / Checking Method | Solution |
|-----------------|----------------|---------------------------|----------|
| ESP8266 not powering ON | No power or incorrect voltage | Measure VIN using multimeter | Ensure 5V supply and common ground |
| ESP8266 resets when motors run | Voltage drop due to motor load | Observe voltage while motors operate | Add 470–1000µF capacitor |
| Motors not rotating | Loose wiring or disabled EN pins | Test motor directly with battery | Reconnect wires, enable ENA/ENB |
| Motors rotate in wrong direction | Reversed polarity | Swap motor terminal wires | Correct motor wiring |
| One motor not working | Faulty motor or driver channel | Swap motors between outputs | Replace faulty component |
| ESP8266 overheats | Overvoltage input | Measure VIN level | Use proper voltage regulation |
| Short circuit | Wiring error | Continuity test | Rewire circuit correctly |
<p align = "justify">
  This troubleshoot integrates an ESP8266, L298N motor driver, N20 motors, and battery supply to achieve reliable wireless motor control.
</p>

### 2.2 Software Test

| Issue / Problem | Possible Cause | Testing / Checking Method | Solution |
|-----------------|----------------|---------------------------|----------|
| Code not uploading | Wrong COM port or boot mode | Check Arduino IDE settings | Select correct port, enter flash mode |
| ESP8266 not responding | Incorrect GPIO usage | Serial Monitor debugging | Use safe GPIO pins |
| Motors not responding | Logic error in code | Add Serial.print() for debugging | Correct control logic |
| PWM not working | Non-PWM pin used | Verify GPIO capability | Use PWM-capable pins |
| Delayed RC response | WiFi latency or blocking code | Ping test / monitor delay | Optimize loop(), remove delay() |
| Robot moves unexpectedly | No default STOP command | Observe startup behavior | Set motor state to STOP at boot |
| Random reboot | Watchdog timeout | Monitor serial output | Optimize loop execution |
| Incorrect motor speed | Wrong PWM value range | Print PWM values | Limit PWM to valid range |
<p align = "justify">
  This troubleshoot enables Wi-Fi communication, processes user commands, and controls motor speed and direction using PWM.
</p>

### 2.3 Serial Test
<p align = "justify">
  This troubleshooting focuses on monitoring serial data thru Arduino INO Serial Monitor to Android app "NodeMCU Car"
</p>

<details>
  <summary> Press the button </summary>
    <img width="1103" height="823" alt="image" src="https://github.com/user-attachments/assets/659a9861-386f-4328-9df0-4abf6502d3e7" />
    <p align = "center">
      <em> Figure 2.3.0 </em>
    </p>
  
</details>

<details>
  <summary> Press the button </summary>
    
</details>



