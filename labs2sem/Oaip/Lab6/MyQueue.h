
struct Queue {
	char num;
	Queue* next;
};

void create(Queue** begin, Queue** end, int p); // Создание
void view(Queue* begin); // Вывод
void Del(Queue** begin, Queue** p); // Удаление
Queue* Elem(Queue* begin, char ch);