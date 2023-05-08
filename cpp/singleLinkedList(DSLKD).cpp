#include<iostream>
#include<string>
using namespace std;

struct Node{
	int data;
	Node *next;
};
typedef struct Node* node;

node makeNode(int x){
	node tmp = new Node();
	tmp -> data = x;
	tmp -> next = NULL;
	return tmp; 
}

bool empty(node a){
	return a == NULL;
}

int size(node a){
	int cnt = 0;
	while(a != NULL){
		cnt++;
		a = a -> next;
	}
	return cnt;
}

void insertFirst(node &a, int x){
	node tmp = makeNode(x);
	if(a == NULL){
		a = tmp;
	}
	else {
		tmp -> next = a;
		a = tmp;
	}
}

void insertLast(node &a, int x){
	node tmp = makeNode(x);
	if(a == NULL) a= tmp;
	else{
		node p = a;
		while(p->next != NULL){
			p = p->next;
		}
		p -> next = tmp;
	}
}

void insertPos(node &a, int x, int pos){	
	int n = size(a);
	if(pos < 0 || pos > n + 1){
		cout << "khong hop le";
		return;
	}
	if(pos == 1) {
		insertFirst(a, x);
		return;
	} 
	else if(pos == n + 1){
		insertLast(a, x);
		return;
	}
	node p = a;
	for(int i=1; i<pos-1; i++){
		p = p->next;
	}
	node tmp = makeNode(x);
	tmp -> next = p -> next;
	p -> next = tmp;
}

void deleteFirst(node &a){
	if(a == NULL) return;
	else{
		a = a -> next;
	}
}

void deleteLast(node &a){
	if(a == NULL) return;
	node truoc = NULL, sau = a;
	while(sau->next != NULL){
		truoc = sau;
		sau = sau->next;
	}
	truoc->next = NULL; 
}

void deletePos(node &a, int pos){
	if(pos<0 || pos > size(a)) return;
	node truoc = NULL, sau = a;
	for(int i=1; i<pos; i++){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL) a = a->next;
	else truoc->next = sau->next;
}

void in(node a){
	cout << "-----";
	while(a != NULL){
		cout << a->data << " ";
		a = a->next;
	}
}

void sapxep(node &a){
	for(node p=a; p->next!=NULL; p=p->next){
		node min = p;
		for(node q = p->next; q != NULL; q = q->next){
			if(q->data < min->data){
				min = q;
			}
		}
		int tmp = min->data;
		min->data = p->data;
		p->data = tmp;
	}
}

int main(){
	node head = NULL;
	while(1){
		cout << "1. Chen 1 phan tu vao dau sanh sach" << endl;
		cout << "2. Chen 1 phan tu vao cuoi danh sach \n";
		cout << "3. Chen 1 phan tu vao giua danh sach \n";
		cout << "4. Xoa phan tu o dau \n";
		cout << "5. Xoa phan tu o cuoi\n";
		cout << "6. Xoa phan tu o giua \n";
		cout << "7. Duyet danh sach lien ket \n";
		cout << "Nhap lua chon: ";
		int lc; cin >> lc;
		if(lc == 1){
			int x; cout << "Nhap gia tri can chen: "; cin >> x;
			insertFirst(head, x);
		} 
		else if(lc == 2){
			int x; cout << "Nhap gia tri can chen: "; cin >> x;
			insertLast(head, x);
		}
		else if(lc == 3){
			int x; cout << "Nhap gia tri can chen: "; cin >> x;
			int pos; cout << "Nhap vi tri can chen: "; cin >> pos;
			insertPos(head, x, pos);
		}
		else if(lc == 4){
			deleteFirst(head);
		}
		else if(lc == 5){
			deleteLast(head);
		}
		else if(lc == 6){
			int pos; cout << "Nhap gia tri can xoa: "; cin >> pos;
			deletePos(head, pos);
		}
		else if(lc == 7){
			int x; cout << "Nhap gia tri can chen: "; cin >> x;
			in(head);
		}
	}
}





