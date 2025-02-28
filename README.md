# Online Voting System in C++

## Overview

This project implements a simple online voting system using C++. The system allows voters to cast their votes in different categories: National, State, and Village elections. Each category has its own set of candidates, and the system keeps track of the votes for each candidate. The program also provides functionality to display the total votes and determine the leading candidate in each category.

## Features

- **Voter Registration**: Collects voter details such as name, voter ID, and address.
- **Voting**: Allows voters to select their preferred candidate from a list.
- **Vote Counting**: Displays the total votes for each candidate after voting.
- **Leading Candidate**: Determines and displays the candidate with the highest votes in each category.

## Classes

### 1. Voting (Base Class)
- **Attributes**:
  - `name`: Voter's name
  - `voterid`: Voter's ID
  - `address`: Voter's address
- **Methods**:
  - `getdata()`: Collects voter details.
  - `voting()`: Virtual method for voting (to be overridden).
  - `tot_votes()`: Virtual method to display total votes (to be overridden).
  - `leading()`: Virtual method to determine the leading candidate (to be overridden).

### 2. National (Derived Class)
- **Attributes**:
  - `state`: State name
  - Vote counters for various national parties.
- **Methods**:
  - `getdata()`: Collects voter details and state name.
  - `voting()`: Allows voting for national parties.
  - `tot_votes()`: Displays total votes for national parties.
  - `leading()`: Determines the leading national party.

### 3. State (Derived Class)
- **Attributes**:
  - `city`: City name
  - Vote counters for various state parties.
- **Methods**:
  - `getdata()`: Collects voter details and city name.
  - `voting()`: Allows voting for state parties.
  - `tot_votes()`: Displays total votes for state parties.
  - `leading()`: Determines the leading state party.

### 4. Village (Derived Class)
- **Attributes**:
  - `vill`: Village name
  - Vote counters for various village parties.
- **Methods**:
  - `getdata()`: Collects voter details and village name.
  - `voting()`: Allows voting for village parties.
  - `tot_votes()`: Displays total votes for village parties.
  - `leading()`: Determines the leading village party.

## Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/online-voting-system.git
   cd online-voting-system
