cis165-lab4

CIS-165-W198.2026FA

Matthew Delos Santos

Initial Program Plans

Step 1: Store 28 in a variable named value1.

Step 2: Store 32 in a variable named value2.

Step 3: Store 37 in a variable named value3.

Step 4: Store 24 in a variable named value4.

Step 5: Store 33 in a variable named value5.

Step 6: Add value1, value2, value3, value4, and value5, and store the result in a variable named sum.

Step 7: Divide sum by 5, and store the result in a variable named average.

Step 8: Display sum and average with clear labels.


Program 2: Ocean-Level Projections

Step 1: Store 1.5 in a named constant called ANNUAL_RATE.

Step 2: Store 5 in a variable named five_years.

Step 3: Store 7 in a variable named seven_years.

Step 4: Store 10 in a variable named ten_years.

Step 5: Multiply ANNUAL_RATE by five_years, and store the result in a variable named increase_five_years.

Step 6: Multiply ANNUAL_RATE by seven_years, and store the result in a variable named increase_seven_years.

Step 7: Multiply ANNUAL_RATE by ten_years, and store the result in a variable named increase_ten_years.

Step 8: Display all three ocean-level increases with clear labels and millimeter units.

How to Run the Programs

I compiled and tested the programs using OnlineGDB.com.

Program 1: Average of Five Values

Step 1: Go to OnlineGDB.com.

Step 2: Select C++ as the programming language.

Step 3: Enter the code for average.cpp in the code editor.

Step 4: Click the Run button to compile and execute the program.

Step 5: Check the output to verify that the sum is 154 and the average is 30.8.

Step 6: Download the source code and save it as average.cpp.

Program 2: Ocean-Level Projections

Step 1: Go to OnlineGDB.com.

Step 2: Select C++ as the programming language.

Step 3: Enter the code for ocean_levels.cpp in the code editor.

Step 4: Click the Run button to compile and execute the program.

Step 5: Check the output to verify that the ocean level rises by 7.5 mm after 5 years, 10.5 mm after 7 years, and 15 mm after 10 years.

Step 6: Download the source code and save it as ocean_levels.cpp.

Testing

| Program and test | Values used | Expected results | Actual results | Match or correction |
| --- | --- | --- | --- | --- |
| Average — assigned values | 28, 32, 37, 24, 33 | Sum = 154; average = 30.8 | Sum = 154; average = 30.8 | Match; no correction needed. |
| Average — changed values | 10, 11, 12, 13, 15 | Sum = 61; average = 12.2 | Sum = 61; average = 12.2 | Match; no correction needed. |
| Ocean — assigned rate | 1.5 mm/year | 5 years = 7.5 mm; 7 years = 10.5 mm; 10 years = 15 mm | 5 years = 7.5 mm; 7 years = 10.5 mm; 10 years = 15 mm | Match; no correction needed. |
| Ocean — changed rate | 2.25 mm/year | 5 years = 11.25 mm; 7 years = 15.75 mm; 10 years = 22.5 mm | 5 years = 11.25 mm; 7 years = 15.75 mm; 10 years = 22.5 mm | Match; no correction needed. |

Explain your code

Why should the five values and the average use the double data type?

The five values should use the double data type because the double uses has decimals as opposed to integer type. Having the values as doubles gives a more accurate result.

The five values add up to 154, so sum becomes 154. The program then divides sum by 5. The result is 30.8, which is stored in average.

Why divide the completed sum?

An average is the total of all values divided by how many values there are. Dividing only the final value would ignore the other four values and would not calculate the average of all five.

How do the ocean-level calculations work?

The program multiplies the annual rate, 1.5 millimeters per year, by each number of years. This gives 7.5 mm after 5 years, 10.5 mm after 7 years, and 15 mm after 10 years.

Why make the annual rate a named constant?

The rate is a fixed assumption for this assignment, so a named constant communicates that it should not change during the program. It also makes the calculation easier to read and makes the rate easy to find if the assumption needs to be updated.

Why store calculations before using cout?

Storing each calculation in a variable makes the steps clear and easier to check, test, and debug. It also follows the assignment's requirement to separate calculations from output.

