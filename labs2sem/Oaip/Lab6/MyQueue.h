
struct Queue {
	char num;
	Queue* next;
};

void create(Queue** begin, Queue** end, int p); // ��������
void view(Queue* begin); // �����
void Del(Queue** begin, Queue** p); // ��������
Queue* Elem(Queue* begin, char ch);