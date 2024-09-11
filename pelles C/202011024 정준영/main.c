
/* �⸻������Ʈ-����ó�� �ý��� ����� */

#include <stdio.h> 
#define st_NUMS 5 // �� �л� �� 

/*** 
   �л����� ���� ����
              ***/ 
typedef struct {
	
	char name[20]; // �̸� 
	int mid; // �߰�  
	int fin; // �⸻  
	int lab; // �ǽ����� 
	int pro; // ������Ʈ���� 
	double score; // ���� 
	char grade; // ���� 
	
} Student;

/*** 
   �л����� ����, ���� ���
                 ***/

Student Calculation(Student student) // student[i]�� Student student(�Ű�����)�� ���� ����
{
	// ����: �ش� �л��� ���� �� �׸��� (�ݿ� ���� x (���� ���� / ����)�� �� +(����) �� x(���ϱ�) 100  
	
	student.score = ((0.3 * ((double)student.mid / 50)) + (0.3 * ((double)student.fin / 50))
      + (0.3 * ((double)student.lab / 40)) + (0.1 * ((double)student.pro / 10))) * 100;
   
	// ����: ������ 90�̻� A, 80�̻� B, 70�̻� C, 60�̻� D, 60�̸��� F

	if (student.score >= 90) // 90�̻� A
		student.grade = 'A';

    else if (student.score >= 80) // 80�̻� B
		student.grade = 'B';

    else if (student.score >= 70) // 70�̻� C
		student.grade = 'C';

    else if (student.score >= 60) // 60�̻� D
		student.grade = 'D';

    else                          // 60�̸� B
		student.grade = 'E';

    return student; //student(student[i]) ��ȯ
}

/*** 
   �л����� ���� ������ ����
                 ***/
void Sort(Student student[])
{
	// ������ ���� ù �л��� �� �л� ������ �ڽ��� �� �л����� ������ ���ϸ� �ȴ�.
	for ( int count = st_NUMS - 1; count > 0; count-- )				
		{
			// ù��° �л��� �������� �� �л��� �� ������ ���ϸ鼭  
			for ( int i = 0; i < count; i++ )				
			{
				// �ڰ� �պ��� ũ��  
				if ( student[i].score < student[i+1].score )
				{
				    // �� ������ ������ �� ū �л����� ����
					Student temp = student[i]; 
					student[i] = student[i+1];							
					student[i+1] = temp;								
				}
			}	
		}

	// ������(��������)���� ����	
}


int main(void) {
	
	Student student[st_NUMS];  // �л� ����ŭ ����ü �迭 ����
  
    FILE * stream1 = fopen("data.txt", "r"); // �л����� ������ ��� ���� �б� �������� ���� ���� 

	FILE * stream2 = fopen("result.txt", "w"); // �л����� ������ ���� ���� ���� �������� ���� ���� 

    for (int i = 0; i < st_NUMS; i++) // i�� student�� index, �л� �� ��ŭ �ݺ�
	{

     fscanf(stream1, "%s %d %d %d %d", 
		student[i].name, &(student[i].mid), &(student[i].fin), 
		&(student[i].lab), &(student[i].pro)); // stream1�� ���� student[i]�� ����鿡 ���� �Է�  
	  
		student[i] = Calculation(student[i]); // student[i]�� �μ��� �����Ͽ� Calculation �Լ� ȣ���ϰ�, return ���� student[i]�� ����

		// �̸�, �� ������ ���� ���, �ο��� ������ result.txt�� ����(���)

     fprintf(stream2, "%5s %d %d %d %2d %.1f %c\n", 
		student[i].name, (student[i].mid), (student[i].fin), (student[i].lab), 
		(student[i].pro), student[i].score, student[i].grade );
	
     }
	fclose(stream2); // "result.txt" ���� �ݱ�

    FILE * stream3 = fopen("order.txt", "w"); // ���� ������ �����ϱ� ���� ���� ����� ���� ����
    
	Sort(student); // �迭 student�� �μ��� student�� �ּҰ��� �����Ͽ� Sort �Լ� ȣ��

    for (int i = 0; i < st_NUMS; i++)
	{
		// Sort �Լ��� ������ ���ĵǾ����Ƿ� �� ������� �л� ���� order.txt�� ����(���)

       fprintf(stream3, "%5s %d %d %d %2d %.1f %c\n", 
		student[i].name, (student[i].mid), (student[i].fin), (student[i].lab), 
		(student[i].pro), student[i].score, student[i].grade );
	}

	fclose(stream3); // "order.txt" ���� �ݱ�

	fclose(stream1); // "data.txt" ���� �ݱ�

	return 0;
    
}
