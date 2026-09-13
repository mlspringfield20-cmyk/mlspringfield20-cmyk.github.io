# 📌 Project Overview

**Project Name:**
→ Virus Mutation Simulation

**What does your program currently do? (1–3 sentences)**
→ My program simulates the spread of a mutation virus through a population. Individuals can become infected, mutate into a stronger form of the virus, or die as the simulation progresses. Each simulation turn represents 12 hours and updates the condition of every individual in the population.

---

# 🔍 Current Progress Check

**What is working right now?**
→ The simulation can create a population, track infection states, process simulation turns, and update individuals based on infection rules. The program can also display the current state of the population after each turn.

**What is NOT working or incomplete?**
→ The program does not currently provide detailed statistics, advanced mutation behavior, or a user-friendly menu system. Additional customization options for simulation settings are still incomplete.

**What feels confusing or messy in your code?**
→ Some of the simulation logic is becoming lengthy and could be separated into smaller functions. The code can also be organized better to make future feature additions easier.

---

# 🚀 Feature Planning

## Feature 1

**Name:**
→ Simulation Statistics Dashboard

**What does this feature do?**
→ Displays the number of healthy, infected, mutated, recovered, and deceased individuals after each simulation turn.

**Why is this feature important?**
→ It gives users a better understanding of how the virus is spreading and allows them to track changes over time.

---

## Feature 2

**Name:**
→ Main Menu System

**What does this feature do?**
→ Allows users to start a simulation, view statistics, adjust settings, or exit the program through a structured menu.

**Why is this feature important?**
→ A menu system improves usability and makes the program easier to navigate.

---

## Feature 3

**Name:**
→ Adjustable Virus Settings

**What does this feature do?**
→ Allows users to modify infection rates, mutation chances, and mortality rates before starting the simulation.

**Why is this feature important?**
→ It increases replay value and allows users to experiment with different virus scenarios.

---

# 🧩 System Design Updates

**Will you need to create any new classes? If so, which ones?**
→ I may create a StatisticsManager class to track simulation data and a MenuManager class to handle user navigation and menu options.

**Will you modify any existing classes? How?**
→ Existing population and virus-related classes will be updated to support new statistics tracking, configurable settings, and improved simulation reporting.

**What data structures will you use (vectors, 2D vectors, etc.)?**
→ I will continue using vectors to store individuals in the population and may use additional vectors to store simulation history and statistical data.

---

# 🔄 Program Flow

**Describe how a user interacts with your program:**

1. Program starts → Display main menu.
2. User chooses → Start simulation or adjust settings.
3. Program responds → Initializes the simulation and displays results for each turn.
4. Loop/next step → Continue simulation until the user exits or the simulation reaches its ending condition.

---

# 🎯 Usability Improvements

**Clearer prompts:**
→ Add more descriptive instructions so users understand available choices and simulation options.

**Better error handling:**
→ Validate user input and prevent invalid menu selections or incorrect values from causing issues.

**Improved menu/navigation:**
→ Create a structured menu system with numbered options and clear navigation between screens.

---

# ⚠️ Potential Challenges

**What do you think will be the hardest part this week?**
→ Balancing the simulation logic while adding new features without making the code difficult to maintain.

**What is your plan if you get stuck?**
→ Review course materials, use debugging tools, research similar simulation systems, and ask questions during office hours or discussion boards.

---

# 📈 Level Up Goal

**What skill are you focusing on improving this week?**
→ Object-oriented programming and program organization.

**What will you do to improve it?**
→ Practice creating classes with clear responsibilities, review tutorials, and refactor code into smaller, reusable functions.

---

# 🗓️ Task Breakdown (GitHub Issues Planning)

* [ ] Create main menu system
* [ ] Add simulation statistics dashboard
* [ ] Implement adjustable virus settings
* [ ] Test and debug all new features

---

# 🔥 Final Check

* [x] Do I know what I’m building this week?
* [x] Do I know where to start?
* [x] Did I break my work into small tasks?

If yes → start coding 🚀

---

# 😈 Final Thought

> Plan it now… or debug it later.
