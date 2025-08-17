# 🏨 Hotel & Restaurant Management System

[![Made with C++](https://img.shields.io/badge/Made%20with-C++-blue.svg)](https://isocpp.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Contributions welcome](https://img.shields.io/badge/Contributions-Welcome-brightgreen.svg?style=flat)](#-contributing)

---

## 📌 Overview
This is a **console-based Hotel & Restaurant Management System** built in **C++**.  
It helps manage hotel room bookings and food orders while keeping track of **sales, stock, and revenue** in real-time.  

---

## ✨ Features
- 🛏️ Book Rooms  
- 🍝 Order Food (Pasta, Burger, Noodles, Shake, Chicken-roll)  
- 📦 Manage Stock (Initial, Sold, Remaining)  
- 💰 Track Daily Sales & Collection  
- 🚪 Exit Program Anytime  

---

## 📖 Menu Options
```text
1) Rooms
2) Pasta
3) Burger
4) Noodles
5) Shake
6) Chicken-roll
7) Information regarding sales and collection
8) Exit
```

---

## 💰 Pricing
| Item          | Price (₹) |
|---------------|-----------|
| 🛏️ Room       | 1200      |
| 🍝 Pasta      | 250       |
| 🍔 Burger     | 120       |
| 🍜 Noodles    | 140       |
| 🥤 Shake      | 120       |
| 🍗 Chicken-roll | 150     |

---

## 📊 Example Sales Report
```text
Number of rooms we had: 10
Number of rooms we gave for rent: 4
Remaining rooms: 6
Total rooms collection for the day: 4800

Number of Pastas we had: 15
Number of Pastas we sold: 5
Remaining Pasta: 10
Total Pasta collection for the day: 1250
```

| Item          | Initial Stock | Sold | Remaining | Total Collection (₹) |
|---------------|--------------:|-----:|----------:|----------------------:|
| 🛏️ Rooms      | 10            | 4    | 6         | 4800                  |
| 🍝 Pasta      | 15            | 5    | 10        | 1250                  |
| 🍔 Burger     | 20            | 8    | 12        | 960                   |
| 🍜 Noodles    | 12            | 6    | 6         | 840                   |
| 🥤 Shake      | 18            | 9    | 9         | 1080                  |
| 🍗 Chicken-roll | 10          | 4    | 6         | 600                   |
| **Total**     | -             | -    | -         | **9530**              |

---

## ▶️ How to Run
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/hotel-management-cpp.git
   ```
2. Navigate into the project folder:
   ```bash
   cd hotel-management-cpp
   ```
3. Compile the code:
   ```bash
   g++ hotel.cpp -o hotel
   ```
4. Run the program:
   ```bash
   ./hotel
   ```

---

## 🛠️ Technologies Used
- **C++** (Core Logic & Console Interaction)
- **GCC/G++** (Compilation)

---

## 📌 Improvements (Future Scope)
- 🔹 Convert to **Object-Oriented C++** (use classes instead of `goto`)  
- 🔹 Add **file storage** to save daily reports  
- 🔹 Build a **GUI version** using Qt/FLTK  
- 🔹 Add **customer billing system**  

---

## 🤝 Contributing
Contributions, issues, and feature requests are welcome!  
Feel free to fork this repository and submit a pull request.  

---

## 📜 License
This project is licensed under the **MIT License**.  
You are free to use, modify, and distribute this software with proper attribution.  

[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

---
