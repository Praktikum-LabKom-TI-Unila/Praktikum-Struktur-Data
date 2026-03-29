# 🐍 Praktikum Struktur Data 2026 - Versi Python

[![Python](https://img.shields.io/badge/Python-3.x-blue.svg)](https://www.python.org/)
[![Version](https://img.shields.io/badge/Version-v2026-green.svg)]()
[![License](https://img.shields.io/badge/License-Educational-orange.svg)]()

Selamat datang di repositori resmi **Praktikum Struktur Data** Laboratorium Komputer! 🎉

Repositori ini berisi kumpulan source code untuk seluruh modul praktikum Struktur Data tahun akademik 2026. Materi disusun secara sistematis dari konsep dasar hingga struktur data lanjutan untuk membantu mahasiswa memahami fondasi pemrograman dengan baik.

---

## 📌 Informasi Versi

| Versi | Bahasa | Status | Keterangan |
|-------|--------|--------|------------|
| **v2026** | Python 🐍 | ✅ Aktif | Versi terbaru yang sedang digunakan |
| v2025 | C++ | 📦 Archived | Tersimpan aman di tag `v2025` |

> **💡 Catatan:** Versi C++ (v2025) tetap dapat diakses melalui tag `v2025` untuk referensi. Gunakan perintah `git checkout v2025` jika diperlukan.

---

## 📁 Struktur Folder

```
📦 Praktikum Struktur Data - labkom
│
├── 📂 Percobaan I (Array & Linked List)
│   ├── 📂 Percobaan I-1
│   │   ├── Array1D.py
│   │   └── Array2D.py
│   ├── 📂 Percobaan I-2
│   │   ├── LinkedList.py
│   │   └── DoublyLinkedList.py
│   └── 📂 Percobaan I-3
│       └── vector.py
│
├── 📂 Percobaan II (Sorting Algorithms)
│   ├── BubbleSort.py
│   ├── SelectionSort.py
│   ├── InsertionSort.py
│   └── ExchangeSort.py
│
├── 📂 Percobaan III (Searching Algorithms)
│   ├── 📂 Percobaan III-1
│   │   ├── SequentialSearching.py
│   │   └── SequentialSearchingSentinel.py
│   └── 📂 Percobaan III-2
│       ├── BinarySearching.py
│       └── BinarySearchingInterpolation.py
│
├── 📂 Percobaan IV (Stack & Queue)
│   ├── 📂 Percobaan IV-1
│   │   ├── StackArray.py
│   │   └── StackLinkedList.py
│   └── 📂 Percobaan IV-2
│       ├── QueueArray.py
│       └── QueueLinkedList.py
│
├── 📂 Percobaan V (Binary Search Tree)
│   └── 📂 V-1
│       ├── BSTDasar.py
│       └── BSTLanjut.py
│
├── 📂 Percobaan VI (Hash Map)
│   └── 📂 Percobaan VI-1
│       ├── HashMapSeparateChaining.py
│       └── HashMapOpenAddressing.py
│
└── 📄 README.md
```

---

## ⚙️ Persyaratan (Prerequisites)

Sebelum memulai, pastikan perangkat Anda sudah memiliki:

### 1. Python 3.x
Unduh dan install Python versi terbaru dari [python.org](https://www.python.org/downloads/)

Cek instalasi dengan menjalankan:
```bash
python --version
```

### 2. Code Editor (Disarankan)
- **[Visual Studio Code](https://code.visualstudio.com/)** - Ringan dan powerful ⭐
- PyCharm Community Edition
- Sublime Text

### 3. Terminal / Command Prompt
- **Windows:** Command Prompt, PowerShell, atau Windows Terminal
- **macOS/Linux:** Terminal bawaan

---

## 🚀 Cara Penggunaan

### Langkah 1: Clone Repository

Buka terminal dan jalankan perintah berikut:

```bash
git clone https://github.com/labkom/praktikum-strukdat-2026.git
```

Atau jika menggunakan SSH:
```bash
git clone git@github.com:labkom/praktikum-strukdat-2026.git
```

### Langkah 2: Masuk ke Direktori

```bash
cd praktikum-strukdat-2026
```

### Langkah 3: Jalankan File Python

Contoh menjalankan file BubbleSort:

```bash
# Masuk ke folder Percobaan II
cd "Percobaan II"

# Jalankan script
python BubbleSort.py
```

Atau langsung dari root folder:
```bash
python "Percobaan II/BubbleSort.py"
```

> **💡 Tips:** Gunakan tanda kutip jika nama folder mengandung spasi.

---

## 📚 Daftar Modul Praktikum

| Modul | Topik | Kompleksitas Waktu |
|-------|-------|-------------------|
| I | Array & Linked List | O(1) - O(n) |
| II | Sorting Algorithms | O(n²) |
| III | Searching Algorithms | O(n) - O(log n) |
| IV | Stack & Queue | O(1) |
| V | Binary Search Tree | O(log n) - O(n) |
| VI | Hash Map | O(1) - O(n) |

---

## 📋 Tata Tertib & Aturan

### ⚠️ Penting untuk Diperhatikan!

1. **Pahami, Jangan Hanya Copy-Paste!**
   
   Kode di repositori ini adalah **referensi pembelajaran**, bukan jawaban instan. Pastikan Anda:
   - Memahami **logika** di balik setiap algoritma
   - Mampu **menjelaskan** cara kerja kode
   - Bisa **memodifikasi** sesuai kebutuhan

2. **Kuasai Big O Notation** 📊
   
   Tahun ini kami memperkenalkan konsep **Big O Notation** untuk menganalisis efisiensi algoritma. Perhatikan:
   - **Time Complexity** - Seberapa cepat algoritma berjalan?
   - **Space Complexity** - Seberapa banyak memori yang digunakan?
   
   ```
   Contoh:
   - Linear Search    : O(n)
   - Binary Search    : O(log n)
   - Bubble Sort      : O(n²)
   ```

3. **Kerjakan Tugas Secara Mandiri**
   
   Diskusi diperbolehkan, tetapi pengerjaan harus **mandiri**. Plagiarisme akan ditindak tegas sesuai peraturan akademik.

4. **Ajukan Pertanyaan!** 🙋
   
   Jangan ragu bertanya kepada asisten praktikum jika menemui kesulitan. Lebih baik bertanya daripada salah paham!

---

## 🤝 Kontribusi

Menemukan bug atau ingin memberikan saran? Silakan:
- Buat **Issue** di repository ini
- Hubungi tim asisten praktikum

---

## 📞 Kontak

Jika ada pertanyaan lebih lanjut, silakan hubungi:
- **Laboratorium Komputer**
- **Tim Asisten Praktikum Struktur Data 2026**

---

<div align="center">

**Selamat Belajar dan Semangat! 💪🔥**

*"The only way to learn a new programming language is by writing programs in it."*
— Dennis Ritchie

---

© 2026 Laboratorium Komputer - Praktikum Struktur Data

</div>
