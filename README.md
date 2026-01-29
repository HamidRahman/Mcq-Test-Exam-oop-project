# Mcq-Test-Exam-oop-project
This project was created when I was in 2nd semester. 
NOTE:
      Must run on turboC.
      
      More Instruction will be given when you run this app.

## OOPPROJE.CPP File Description

**OOPPROJE.CPP** is the main source file for this Object-Oriented Programming project that implements a graphical Multiple Choice Question (MCQ) test examination system.

### Overview
This is a comprehensive C++ program designed for Turbo C++ that creates an interactive entrance test exam application using the Borland Graphics Interface (BGI). The program allows users to take MCQ-based tests in three different categories: Medical, Engineering, and Computer Science.

### Key Components

#### Class Structure
The program is built using Object-Oriented Programming principles with two main classes:

1. **`mcq` Class**
   - Manages the core test functionality including question display, answer validation, and scoring
   - **Private Members:**
     - `tick`: Stores correct answer score
     - `ghalat`: Tracks wrong answers
     - `tcount`: Counts total correct answers
     - `mcq_no`: Current MCQ number
     - `unsolved`: Tracks unanswered questions
     - `option`: Stores user's selected option
   - **Public Methods:**
     - `data()`: Computer Science test questions
     - `medical()`: Medical test questions
     - `engg()`: Engineering test questions
     - `result()`: Displays test results and statistics
     - `welcome()`: Welcome screen display
     - `frame()`: Creates GUI frames for questions
     - `wait()`: Loading animation for results
     - `guidmenu()`: Displays user guidelines
     - `button()`: Creates visual button elements
     - `hitbtn()`: Provides visual and audio feedback for answers

2. **`username` Class**
   - Handles user identity and interface elements
   - **Private Members:**
     - `name[20]`: Stores user's name
   - **Public Methods:**
     - `yourname()`: Prompts and gets user's name
     - `showname()`: Displays user's name
     - `instruction()`: Shows main menu with test options
     - `mcqtrick()`: Displays MCQ solving tips
     - `logo()`: Creates animated colored logo
     - `logo1()`: Clears logo animation

### Features

- **Graphical User Interface**: Uses BGI library to create a visually appealing interface with rectangles, circles, and text formatting
- **Three Test Categories**: 
  - Medical Test (Press M)
  - Engineering Test (Press E)
  - Computer Science Test (Press C)
- **Interactive Controls**: Keyboard-based navigation (A, B, C, D for options, ESC to exit)
- **Real-time Feedback**: Visual (colored buttons) and audio (beep sounds) feedback for correct/incorrect answers
- **Score Tracking**: Automatically calculates and displays:
  - Total marks (correct - incorrect)
  - Number of correct answers
  - Number of wrong answers
  - Number of unsolved questions
- **Animated Elements**: Opening logo animation with color transitions
- **MCQ Tips Section**: Educational section for MCQ solving strategies

### Program Flow

1. Graphics initialization
2. Welcome screen display
3. Animated logo presentation
4. User name input
5. Main instruction menu loop
6. Test selection (Medical/Engineering/Computer Science/Tips)
7. Question presentation with visual buttons
8. Answer validation with feedback
9. Results display with statistics
10. Return to main menu or exit

### Technical Details

- **Language**: C++ (Turbo C++ compatible)
- **Graphics Library**: Borland Graphics Interface (BGI)
- **Standard Libraries Used**: 
  - `iostream.h`, `stdio.h`, `graphics.h`, `conio.h`, `stdlib.h`, `string.h`, `dos.h`
- **Scoring System**: Each correct answer adds 4 points to the score
- **Answer Options**: Four options (A, B, C, D) for each question
- **Visual Effects**: Color-coded feedback (Green for correct, Red for incorrect)

### Usage Requirements

- Must be compiled and run on **Turbo C++**
- Requires BGI graphics library files in `..\\bgi` directory
- VGA graphics support needed
- Keyboard input required for interaction

This file demonstrates fundamental OOP concepts including encapsulation, class design, constructors, and member functions while creating a practical educational application.
