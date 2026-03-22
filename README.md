# 👟 IoT-Based Intelligent Smart Orthotic Footwear System

> Embedded + IoT Project for Smart Gait Analysis, Risk Prediction & Real-Time Biofeedback

---

## 📌 Overview

An intelligent wearable footwear system designed to monitor plantar pressure, analyze gait biomechanics, predict injury risks, and provide real-time corrective feedback.

This project transforms traditional orthotics into a **smart, closed-loop healthcare system** using embedded intelligence, sensor fusion, and energy harvesting.

---

## 🚀 Key Features

* 📊 Real-time plantar pressure monitoring
* 🧠 Embedded gait phase detection
* 🔗 Sensor fusion (FSR + IMU)
* ⚠️ Time-integrated risk prediction
* 🔔 Directional haptic feedback
* 🔋 Piezoelectric energy harvesting
* ☁️ Cloud-based lightweight ML
* ⚡ Energy-aware power management

---

## 🏗️ System Architecture

```
[FSR + IMU Sensors]
          ↓
     [ESP32 MCU]
          ↓
[Feature Extraction + Risk Engine]
          ↓
   [Feedback System]
          ↓
   [WiFi / Bluetooth]
          ↓
      [Cloud + ML]
          ↓
      [Dashboard UI]
```

---

## 🔧 Hardware Components

* ESP32 Microcontroller
* Force Sensitive Resistors (FSR)
* IMU Sensor (Accelerometer + Gyroscope)
* Vibration Motors (Haptic Feedback)
* Piezoelectric Sensors
* Battery + Power Management Circuit

---

## ⚙️ Software & Technologies

* Embedded C / Arduino Framework
* ESP32 Firmware
* Signal Processing Algorithms
* Machine Learning (Logistic Regression, Decision Tree)
* IoT Cloud Platform (Firebase / ThingsBoard / AWS IoT)

---

## 🔄 Working Principle

### 1. Data Acquisition

* FSR sensors capture foot pressure distribution
* IMU captures motion and orientation

### 2. Signal Processing

* Noise filtering
* Calibration
* ADC conversion

### 3. Gait Phase Detection

* Heel Strike
* Mid Stance
* Toe Off

### 4. Feature Extraction

* Peak Pressure
* Contact Duration
* Loading Rate
* Step Symmetry Index

### 5. Risk Computation

```
Risk = Pressure × Duration × Repetition × Asymmetry
```

### 6. Feedback Mechanism

* Vibration alerts triggered based on overload zones

---

## 🧠 Adaptive Learning

* Learns user baseline during initial usage
* Uses dynamic threshold:

```
Threshold = Mean + (k × Standard Deviation)
```

* Enables personalization without heavy AI

---

## ☁️ Machine Learning Model

* Logistic Regression → Injury Risk Prediction
* Decision Tree → Gait Abnormality Detection

Only extracted features are transmitted → reduces power & bandwidth usage.

---

## 🔋 Energy Harvesting System

* Piezoelectric sensors placed under heel & forefoot
* Converts walking pressure into electrical energy

**Energy Flow:**

```
Foot Impact → Mechanical Stress → AC Voltage → Rectifier → Storage
```

---

## ⚡ Power Optimization

* Adaptive sampling rate
* Controlled WiFi transmission
* Deep sleep modes

---

## 📱 Applications

* Diabetic foot monitoring
* Rehabilitation support
* Elderly care
* Sports performance tracking
* Preventive orthopedics

---

## 🌟 Novelty

* Real-time embedded gait engine
* Time-based risk modeling
* Closed-loop corrective system
* On-device feature extraction
* Integrated energy harvesting

---

## ⚠️ Limitations

* Limited harvested energy
* Sensor drift
* Calibration dependency
* Requires clinical validation

---

## 🧪 Implementation Steps

1. Sensor integration
2. Embedded firmware development
3. Risk model implementation
4. Feedback system setup
5. Energy harvesting circuit design
6. IoT dashboard creation
7. Testing & validation

---

## 📊 Expected Outcomes

* Improved posture correction
* Early detection of abnormalities
* Reduced injury risk
* Extended battery life

---
<img width="715" height="811" alt="image" src="https://github.com/user-attachments/assets/3c8619d8-cb19-44fa-bb6d-7423e21f1497" />

## 🔮 Future Scope

* Mobile app integration
* AI-based adaptive correction
* Clinical trials
* Product commercialization


## 👨‍💻 Author

Priyadarshini
priyadarshini0727@gmail.com

---
