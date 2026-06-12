# TASK 1: SMART PLANT WATERER SYSTEM (SIMULATION MODEL)

## 👤 Intern Information
* **Intern ID:** CITS4432
* **Full Name:** Giridharun Saravanan
* **Domain:** Internet of Things (IoT)
* **Duration:** 4 Weeks

---

## 📌 Project Overview
This project presents an intermediate-level automated smart irrigation prototype developed for the ESP32 platform. Built as a fully functional software simulation ("Digital Twin"), the system acquires localized soil dampness data via an analog layout and systematically executes irrigation cycles using algorithmic threshold monitoring to minimize resource waste. 

By utilizing virtual simulation, this model ensures rapid testing, hardware safety, and remote telemetry tracking without requiring physical circuit deployment.

---

## 🏗️ System Architecture
The data flow and hardware interaction are structured as follows:

```text
[ Soil Moisture Sensor ] ──(Analog GPIO 34)──> [ ESP32 MCU ] ──(Digital GPIO 23)──> [ Relay/Water Pump LED ]
This is for my simulations in wokwi.com has been created sucessfully in it.
https://wokwi.com/projects/466584271604107265
