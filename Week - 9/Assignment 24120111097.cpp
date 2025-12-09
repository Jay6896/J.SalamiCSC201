#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void Creator(int stud_id[], int stud_score[])
{
    ofstream outfile("C:\\Users\\Jamil\\Documents\\J.SalamiCSC201\\Week - 9\\scores.csv");

    if (!outfile)
    {
        cout << "Error creating file";
    }

    outfile << "StudentID | Score \n----------------- \n";

    for (int i = 0; i < 7; i++)
    {
        outfile << stud_id[i] << "        " << stud_score[i] << "\n";
    }
}

int loadData(const char filename[], int ids[], int scores[], int maxSize)
{
    ifstream infile("C:\\Users\\Jamil\\Documents\\J.SalamiCSC201\\Week - 9\\scores.csv");

    if (!infile)
    {
        cout << "Error opening file";
    }

    string line;
    int ID;
    int score;
    getline(infile, line);
    getline(infile, line);

    while (infile >> ID >> score)
    {
        ids[maxSize] = ID;
        scores[maxSize] = score;

        maxSize = maxSize + 1;
    }

    return maxSize;
}

void printAll(int ids[], int scores[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "\nStudentID: " << ids[i] << "    Score: " << scores[i];
    }
}

void computeStats(int scores[], int size, double &average, int &minScore, int &maxScore)
{
    for (int i = 0; i < size; i++)
    {
        average += scores[i];
    }

    average = average / size;

    minScore = scores[0];
    for (int i = 1; i < size; i++)
    {
        if (scores[i] < minScore)
        {
            minScore = scores[i];
        }
    }

    maxScore = scores[0];
    for (int i = 1; i < size; i++)
    {
        if (scores[i] > maxScore)
        {
            maxScore = scores[i];
        }
    }
}

void computeGradeDistribution(int scores[], int size, int &countA, int &countB, int &countC, int &countD, int &countF)
{
    countA = 0;
    countB = 0;
    countC = 0;
    countD = 0;
    countF = 0;

    for (int i = 0; i < size; i++)
    {
        if (scores[i] >= 70)
            countA++;
        else if (scores[i] >= 60)
            countB++;
        else if (scores[i] >= 50)
            countC++;
        else if (scores[i] >= 45)
            countD++;
        else
            countF++;
    }
}

int pickRandomPassingStudent(int ids[], int scores[], int size)
{
    int passingIndices[100];
    int passCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (scores[i] >= 50)
        {
            passingIndices[passCount] = i;
            passCount++;
        }
    }

    if (passCount > 0)
    {
        int randomIndex = rand() % passCount;
        return passingIndices[randomIndex];
    }
    return -1;
}

void saveSummary(const char filename[], double average, int minScore, int maxScore, int countA, int countB, int countC, int countD, int countF)
{
    ofstream outfile(filename);

    if (outfile)
    {
        outfile << "Metric,Value\n";
        outfile << "Number of Students," << (countA + countB + countC + countD + countF) << "\n";
        outfile << "Average Score," << average << "\n";
        outfile << "Minimum Score," << minScore << "\n";
        outfile << "Maximum Score," << maxScore << "\n";
        outfile << "A Count," << countA << "\n";
        outfile << "B Count," << countB << "\n";
        outfile << "C Count," << countC << "\n";
        outfile << "D Count," << countD << "\n";
        outfile << "F Count," << countF << "\n";
    }
}

void displayTotalStudents(int size)
{
    cout << "Total number of students - " << size;
}

void displayRecordsHeader()
{
    cout << "\n\nAll student records -";
}

void displayStatsResults(double average, int minScore, int maxScore)
{
    cout << "\n\nAverage, minimum, maximum score - Average: " << average << ", Minimum: " << minScore << ", Maximum: " << maxScore;
}

void displayGradeResults(int countA, int countB, int countC, int countD, int countF)
{
    cout << "\n\nNumber of A, B, C, D, F grades - A: " << countA << ", B: " << countB << ", C: " << countC << ", D: " << countD << ", F: " << countF;
}

void displayLuckyStudentResult(int ids[], int scores[], int index)
{
    cout << "\n\nLucky randomly selected passing student - ";
    if (index != -1)
    {
        cout << "StudentID: " << ids[index] << " Score: " << scores[index];
    }
    else
    {
        cout << "None";
    }
}

void displayFileSavedConfirmation()
{
    cout << "\n\nConfirmation that summary.csv has been created - File saved successfully.\n";
}

int main()
{
    srand(time(0));

    int minScore, maxScore;
    double average = 0;
    int countA, countB, countC, countD, countF;

    int ids[100] = {1001, 1002, 1003, 1004, 1005, 1006, 1007};
    int scores[100] = {72, 45, 88, 67, 90, 53, 39};
    int maxSize = 7;

    Creator(ids, scores);

    maxSize = loadData("scores.csv", ids, scores, maxSize);

    displayTotalStudents(maxSize);

    displayRecordsHeader();
    printAll(ids, scores, maxSize);

    computeStats(scores, maxSize, average, minScore, maxScore);
    displayStatsResults(average, minScore, maxScore);

    computeGradeDistribution(scores, maxSize, countA, countB, countC, countD, countF);
    displayGradeResults(countA, countB, countC, countD, countF);

    int luckyIndex = pickRandomPassingStudent(ids, scores, maxSize);
    displayLuckyStudentResult(ids, scores, luckyIndex);

    saveSummary("summary.csv", average, minScore, maxScore, countA, countB, countC, countD, countF);
    displayFileSavedConfirmation();
}