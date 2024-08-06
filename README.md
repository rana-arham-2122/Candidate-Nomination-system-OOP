Candidate Nomination System

This project is an Object-Oriented Programming (OOP) based system designed to manage the nomination of candidates for MPA (Member of Provincial Assembly) and MNA (Member of National Assembly) seats. The entire functionality is structured across three files, ensuring modularity and ease of maintenance.

Project Structure

File 1: Candidate Details

Purpose: Manages candidate information such as name, area, and ID.

Key Classes/Functions:

Candidate: A class representing each candidate, with attributes for name, area, and ID.

add_candidate(): A function to add new candidates to the system.

display_candidates(): A function to display all registered candidates.

File 2: Seat Selection

Purpose: Handles the process of selecting the type of seat (MPA or MNA) for which a candidate is being nominated.

Key Classes/Functions:

Seat: A class to represent the type of seat.

select_seat(): A function to prompt the user to choose between MPA or MNA seats.

File 3: Candidate Election

Purpose: Manages the election process, selecting or electing candidates based on their details and the chosen seat type.

Key Classes/Functions:

Election: A class to manage the election process.

elect_candidate(): A function to elect candidates based on provided details and selected seats.

display_elected_candidates(): A function to display the list of elected candidates.

Workflow

Candidate Registration: Candidates are registered with their details (name, area, ID) in the system.

Seat Selection: The system prompts the user to select whether the candidate is running for an MPA or MNA seat.

Election Process: Based on the candidate details and the chosen seat type, the system elects the candidates and maintains a list of elected individuals.

Usage
This project simplifies the process of managing candidate nominations for MPA and MNA seats through a structured, OOP-based approach, ensuring clarity and maintainability. It is suitable for electoral bodies or organizations involved in candidate management and election processes.

