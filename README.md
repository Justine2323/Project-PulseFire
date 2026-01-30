# Project-PulseFire
## 📌 Overview

<p align="justify">
Purpose : For entry to the upcoming event of ECES-IECEP UE-Caloocan Campus named "ASICUP" competition and also for my final project in final term in Communication 2 laboratory
</p>

<p align="justify">
The PulseFire project was designed as a wireless-controlled embedded system that integrates a graphical user interface (GUI) and Wi-Fi connectivity to enable real-time control and monitoring. The GUI serves as the user interaction layer, allowing intuitive command input and system visualization, while the Wi-Fi connectivity enables reliable wireless communication between the controller and the embedded hardware. This combination demonstrates the practical application of digital communication concepts, user-interface design, and wireless data transmission in a single functional prototype.
</p>

## Table of Contents
- [PART 1: Planning](https://github.com/Justine2323/Project-PulseFire?tab=readme-ov-file#part-2-troubleshooting--testing](https://github.com/Justine2323/Project-PulseFire?tab=readme-ov-file#part-1-planning))
- [PART 2: Troubleshooting & Testing](https://github.com/Justine2323/Project-PulseFire?tab=readme-ov-file#part-2-troubleshooting--testing)
- [PART 3: Final Output](https://github.com/Justine2323/Project-PulseFire?tab=readme-ov-file#31-resultsvideo)
- [Results and Summarization](https://github.com/Justine2323/Project-PulseFire?tab=readme-ov-file#results-and-summarization)


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
  
https://github.com/user-attachments/assets/524daced-49cc-426e-8bb9-c1e31907769f

</details>

## Part 3: Final Output
<p align = "justify">
The final output of the PulseFire project is a fully functional WiFi-controlled embedded system capable of real-time motor control through a graphical user interface (GUI). The system successfully integrates hardware components and software logic, enabling stable wireless communication, responsive control, and reliable operation. This output demonstrates the effective application of communication principles, embedded programming, and system integration in a working prototype.
</p>

### 3.0 Prototype/Output

| TOP-SIDE | BOTTOM-SIDE |
|----------|-------------|
|<img width="609" height="809" alt="image" src="https://github.com/user-attachments/assets/47229247-54f6-4c04-8cef-71ec3ef03986" />|<img width="603" height="805" alt="image" src="https://github.com/user-attachments/assets/a295370c-fc0c-4293-92ce-9990efd425ec" />|

| FRONT-SIDE | BACK-SIDE |
|------------|-----------|
|<img width="599" height="796" alt="image" src="https://github.com/user-attachments/assets/78df6473-19ac-4423-9c52-ca67698d0ae0" />|<img width="607" height="806" alt="image" src="https://github.com/user-attachments/assets/a31a7545-324b-4dc6-a0eb-311e3117ac70" />|

| LEFT-SIDE | RIGHT-SIDE |
|-----------|------------|
|<img width="598" height="809" alt="image" src="https://github.com/user-attachments/assets/81071d69-3b95-4eda-97b2-7fb76322b1e9" />|<img width="607" height="817" alt="image" src="https://github.com/user-attachments/assets/e00d4b2d-1405-4a81-92a1-313453b5d8ff" /> |

    
|       ISOMETRIC        |
|------------------------|
|<img width="825" height="737" alt="image" src="https://github.com/user-attachments/assets/fabe2d53-c1e5-4af0-8057-116edf350892" />|
  
### 3.1 Results/Video
<p align="justify">
The results show that the PulseFire system is fully functional, as demonstrated in the recorded video output. The video confirms successful Wi-Fi connectivity, responsive control through the graphical user interface (GUI), and proper motor operation in real time. This validates the correct integration of hardware and software components and the effectiveness of the implemented coding and modulation techniques.
</p>

https://github.com/user-attachments/assets/1ec75821-a175-4529-a3f2-0750c974e089


## Results and Summarization

| Aspect | Description | Result |
|------|-------------|--------|
| System Functionality | Overall operation of PulseFire system | Fully functional |
| Wi-Fi Connectivity | Wireless communication between GUI and ESP8266 | Stable and reliable |
| GUI Control | User command input and real-time response | Responsive |
| Motor Operation | Direction and speed control via L298N and PWM | Accurate and smooth |
| Hardware Integration | ESP8266, L298N, N20 motors, Battery | Properly integrated |
| Software Performance | Command processing and control logic | Stable execution |
| Coding Technique | Digital command encoding and processing | Successfully implemented |
| Modulation Technique | Wi-Fi-based digital modulation (QAM/PSK) | Effective transmission |
| Testing Outcome | Hardware, software, and serial testing | Passed |
| Project Objective | ASICUP competition & Comm 2 Lab requirement | Achieved |


<p align="justify"> This PulseFire project was successfully achieved its intended objectives by producing a fully operational WiFi-controlled embedded system. Based on the testing procedures and video results, this system demonstrated stable wireless connectivity, responsive motor control, and reliable interaction through the graphical user interface (GUI). All of major hardware components such as ESP8266, L298N motor driver, and N20 motors, functioned correctly and were properly integrated. 
</p> 


[BACK TO TOP ](https://github.com/Justine2323/Project-PulseFire?tab=readme-ov-file#project-pulsefire)










