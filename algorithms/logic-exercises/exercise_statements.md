# Exercise Statements

## 1) swap_variables.cpp

Write a program that reads two integer variables and swaps their contents.

## 2) student_grade_system.cpp

Develop a program in C/C++ that reads a student's grades and their respective type:

- **R** → Regular student  
- **E** → Special regime student  

The program must use the `switch` control structure to identify the student type and calculate the average according to the rules below.

### a. Regular Student (R)

- Input the grades of two exams (`P1` and `P2`)
- Input the grades of two homework assignments (`L1` and `L2`)
- Input the Productivity Factor (`FP`), corresponding to the student's class attendance frequency
- Calculate the average:  
  `AVERAGE = (((P1+P2)/2)*0.5) + (((L1+L2)/2)*0.4) + (FP*0.1)`

### b. Special Regime Student (E)

- Input the grades of two exams (`P1` and `P2`)
- Calculate the average:  
  `AVERAGE = (P1+P2)/2.0`

### c. Final Classification (using `if`)

- Average ≥ 6.0 → `"Approved"`
- Average between 2.0 and 5.9 → `"Retake exam"`
- Average below 2.0 → `"Failed"`

## 3) temperature_converter.cpp

Develop an algorithm that reads a temperature in degrees Celsius and converts it to Fahrenheit (F) or Kelvin (K), depending on the user's choice. Use a `do...while` loop to ask if the user wants another conversion and restart the algorithm.

**Formulas:**  
- Fahrenheit: `F = (9/5) × C + 32`  
- Kelvin: `K = C + 273.15`

**Example:**  
`C = 25°C` → `F = 77°F`, `K = 298.15K`

## 4) piecewise_function.cpp

Create an algorithm that receives the value of `x`, calculates and prints `f(x)`:

f(x) = 1, if x ≤ 1
f(x) = 2, if 1 < x ≤ 2
f(x) = x², if 2 < x ≤ 3
f(x) = x³, if x > 3

## 5) bmi_calculator.cpp

Develop a program that calculates the Body Mass Index (BMI) and determines the classification.

**Formula:**  
`BMI = weight(kg) / (height(m))²`

**Classification table:**  
- Underweight: `BMI < 18.5`  
- Normal weight: `18.5 ≤ BMI < 24.9`  
- Overweight: `25 ≤ BMI < 29.9`  
- Obesity: `BMI ≥ 30`

## 6) access_code_validation.cpp

Create an algorithm that:

- Asks the user for a numeric code.
- Repeats the request until the correct code is entered (use `do...while`).
- Uses `if` to check if the code is correct.
- After a correct entry, uses `switch` to show the access type.

**Access codes table:**

| Code | Access Type      | Message            |
|------|------------------|--------------------|
| 145  | Administrator    | "Full access"      |
| 235  | Employee         | "Basic access"     |
| 322  | Visitor          | "Restricted access"|

## 7) math_operations_menu.cpp

Write an algorithm that reads three numbers, displays a menu (Table 1), and returns the result of the chosen option. Use `do...while` to ask if the user wants to continue and to validate input. Use `switch` for the options.

**Menu (Table 1):**

| Code | Option        |
|------|---------------|
| 1    | Sum           |
| 2    | Average       |
| 3    | Multiplication|

## 8) freight_classification.cpp

A logistics company needs to calculate the shipping type. Create a program in C/C++ that:

- Reads cargo weight (kg) and delivery distance (km). Validate input with `do...while`.
- Classify freight as:
  - **"Priority freight"** → weight ≤ 100 kg **and** distance ≤ 200 km
  - **"Heavy freight"** → weight > 100 kg **or** distance > 500 km
  - **"Standard freight"** → otherwise

## 9) factory_sector_evaluation.cpp

A factory has three sectors:  
`1 = Assembly`, `2 = Finishing`, `3 = Packaging`.

The program must ask for the sector number and the quantity of parts produced, then evaluate:

- **Sector 1 (Assembly)**: acceptable if quantity ≥ 100; otherwise `"Insufficient production"`
- **Sector 2 (Finishing)**: acceptable if 50 ≤ quantity ≤ 200; otherwise `"Out of expected range"`
- **Sector 3 (Packaging)**: always acceptable, but if quantity < 30 or > 500, also show `"Attention: adjustment needed!"`
- Any other number: `"Invalid sector"`