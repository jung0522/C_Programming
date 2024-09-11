
/* 기말프로젝트-성적처리 시스템 만들기 */

#include <stdio.h> 
#define st_NUMS 5 // 총 학생 수 

/***
   학생들의 성적 정보
			  ***/
typedef struct {

	char name[20]; // 이름 
	int mid; // 중간  
	int fin; // 기말  
	int lab; // 실습과제 
	int pro; // 프로젝트과제 
	double score; // 성적 
	char grade; // 학점 

} Student;

/***
   학생들의 성적, 학점 계산
				 ***/

Student Calculation(Student student) // student[i]는 Student student(매개변수)로 전달 받음
{
	// 성적: 해당 학생이 받은 각 항목의 (반영 비율 x (받은 점수 / 만점)을 다 +(더한) 후 x(곱하기) 100  

	student.score = ((0.3 * ((double)student.mid / 50)) + (0.3 * ((double)student.fin / 50))
		+ (0.3 * ((double)student.lab / 40)) + (0.1 * ((double)student.pro / 10))) * 100;

	// 학점: 성적이 90이상 A, 80이상 B, 70이상 C, 60이상 D, 60미만은 F

	if (student.score >= 90) // 90이상 A
		student.grade = 'A';

	else if (student.score >= 80) // 80이상 B
		student.grade = 'B';

	else if (student.score >= 70) // 70이상 C
		student.grade = 'C';

	else if (student.score >= 60) // 60이상 D
		student.grade = 'D';

	else                          // 60미만 B
		student.grade = 'E';

	return student; //student(student[i]) 반환
}

/***
   학생들을 성적 순으로 정렬
				 ***/
void Sort(Student student[])
{
	// 성적을 비교할 첫 학생은 총 학생 수에서 자신을 뺀 학생들의 점수와 비교하면 된다.
	for (int count = st_NUMS - 1; count > 0; count--)
	{
		// 첫번째 학생의 성적부터 뒤 학생의 두 성적을 비교하면서  
		for (int i = 0; i < count; i++)
		{
			// 뒤가 앞보다 크면  
			if (student[i].score < student[i + 1].score)
			{
				// 앞 쪽으로 성적이 더 큰 학생으로 변경
				Student temp = student[i];
				student[i] = student[i + 1];
				student[i + 1] = temp;
			}
		}
	}

	// 성적순(내림차순)으로 정렬	
}


int main(void) {

	Student student[st_NUMS];  // 학생 수만큼 구조체 배열 선언

	FILE* stream1 = fopen("data.txt", "r"); // 학생들의 정보를 얻기 위해 읽기 전용으로 파일 오픈 

	FILE* stream2 = fopen("result.txt", "w"); // 학생들의 성적를 쓰기 위해 쓰기 전용으로 파일 오픈 

	for (int i = 0; i < st_NUMS; i++) // i는 student의 index, 학생 수 만큼 반복
	{

		fscanf(stream1, "%s %d %d %d %d",
			student[i].name, &(student[i].mid), &(student[i].fin),
			&(student[i].lab), &(student[i].pro)); // stream1을 통해 student[i]의 멤버들에 정보 입력  

		student[i] = Calculation(student[i]); // student[i]를 인수로 전달하여 Calculation 함수 호출하고, return 값을 student[i]에 저장

		// 이름, 원 점수와 계산된 결과, 부여된 학점을 result.txt에 쓴다(출력)

		fprintf(stream2, "%5s %d %d %d %2d %.1f %c\n",
			student[i].name, (student[i].mid), (student[i].fin), (student[i].lab),
			(student[i].pro), student[i].score, student[i].grade);

	}
	fclose(stream2); // "result.txt" 파일 닫기

	FILE* stream3 = fopen("order.txt", "w"); // 성적 순으로 정렬하기 위해 쓰기 전용읋 파일 오픈

	Sort(student); // 배열 student를 인수로 student의 주소값을 전달하여 Sort 함수 호출

	for (int i = 0; i < st_NUMS; i++)
	{
		// Sort 함수로 성적이 정렬되었으므로 이 순서대로 학생 정보 order.txt에 쓴다(출력)

		fprintf(stream3, "%5s %d %d %d %2d %.1f %c\n",
			student[i].name, (student[i].mid), (student[i].fin), (student[i].lab),
			(student[i].pro), student[i].score, student[i].grade);
	}

	fclose(stream3); // "order.txt" 파일 닫기

	fclose(stream1); // "data.txt" 파일 닫기

	return 0;

}
