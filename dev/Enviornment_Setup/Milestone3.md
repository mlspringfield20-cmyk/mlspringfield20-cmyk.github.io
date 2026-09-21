# Milestone 3 Changelog

## Features Added

This week I continued working on the virus simulation project and focused on improving the overall functionality of the program. The simulation is able to track uninfected, infected, mutated, and dead individuals throughout each turn. I also continued testing the infection, mutation, and mortality systems to make sure they were working correctly.

## Refactoring Improvements

One of my main goals this week was improving the structure of the code. Originally, most of the simulation logic was located inside the AdvanceTurn() function. To make the code easier to read and maintain, I separated the logic into smaller helper functions. I created ProcessMutations(), ProcessDeaths(), and ProcessInfections() so each function has a specific responsibility. This made the simulation loop much cleaner and easier to follow.

## Bug Fixes

While testing the simulation, I found an issue with the death percentage calculation. The program was displaying an incorrect percentage for dead individuals. After reviewing the formula, I corrected the calculation so the statistics now display accurate percentages.

## System Design Updates

I continued improving the organization of the Simulation class by separating different tasks into their own functions. This reduced duplicate code and made the project easier to understand. These changes should also make it easier to add new features in future milestones.

## What I Learned

This week helped me better understand how refactoring can improve code quality without changing the overall functionality of a program. I also gained more experience organizing larger functions into smaller pieces and debugging calculation errors.

## Next Steps

Before the next milestone, I plan to continue expanding the simulation and improving the overall user experience. I also want to keep refining the structure of the code and look for additional opportunities to improve readability and maintainability.