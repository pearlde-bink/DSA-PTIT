#include<bits/stdc++.h>
using namespace std;

struct Student{
	string name, id;
	double gpa;
};

struct SV{
	Student s;
	SV* next;
};

typedef struct SV* sv;

sv makeNode(){
	Student s;
	cout <<"Nhap thong tin sinh vien: " << endl;
	cout << "Nhap Id :" ; cin >> s.id;
	cout << "Nhap ten: "; cin.ignore();
	getline(cin, s.name);
	cout << "Nhap gpa: "; cin >> s.gpa;
	sv tmp = new SV;
	tmp->s = s;
	tmp->next = NULL;
	return tmp;
}

bool empty(sv a){
	return a == NULL;
}

int size(sv a){
	int cnt = 0;
	while(a != NULL){
		cnt++;
		a = a -> next;
	}
	return cnt;
}

void insertFirst(sv &a){
	sv tmp = makeNode();
	if(a == NULL){
		a = tmp;
	}
	else {
		tmp -> next = a;
		a = tmp;
	}
}

void insertLast(sv &a){
	sv tmp = makeNode();
	if(a == NULL) a= tmp;
	else{
		sv p = a;
		while(p->next != NULL){
			p = p->next;
		}
		p -> next = tmp;
	}
}

void insertPos(sv &a, int pos){	
	int n = size(a);
	if(pos < 0 || pos > n + 1){
		cout << "khong hop le";
		return;
	}
	if(pos == 1) {
		insertFirst(a);
		return;
	} 
	else if(pos == n + 1){
		insertLast(a);
		return;
	}
	sv p = a;
	for(int i=1; i<pos-1; i++){
		p = p->next;
	}
	sv tmp = makeNode();
	tmp -> next = p -> next;
	p -> next = tmp;
}

void deleteFirst(sv &a){
	if(a == NULL) return;
	else{
		a = a -> next;
	}
}

void deleteLast(sv &a){
	if(a == NULL) return;
	sv truoc = NULL, sau = a;
	while(sau->next != NULL){
		truoc = sau;
		sau = sau->next;
	}
	truoc->next = NULL; 
}

void deletePos(sv &a, int pos){
	if(pos<0 || pos > size(a)) return;
	sv truoc = NULL, sau = a;
	for(int i=1; i<pos; i++){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL) a = a->next;
	else truoc->next = sau->next;
}

void in(Student s){
	cout <<"Id: " << s.id << endl;
	cout << "Ho ten : " << s.name << endl;
	cout << "GPA : " << setprecision(2) << fixed  << s.gpa<< endl;
}

void inDs(sv a){
	cout <<"Danh sach sinh vien: " << endl;
	while(a!=NULL){
		in(a->s);
		a = a->next;
	}
	cout << endl;
}

void sapxep(sv &a){
	for(sv p=a; p->next!=NULL; p=p->next){
		sv min = p;
		for(sv q = p->next; q != NULL; q = q->next){
			if(q->s.gpa < min->s.gpa){
				min = q;
			}
		}
		Student tmp = min->s;
		min->s = p->s;
		p->s = tmp;
	}
}

int main(){
	sv head = NULL;
	while(1){
		cout << "1. Chen sinh vien vao dau sanh sach" << endl;
		cout << "2. Chen sinh vien vao cuoi danh sach \n";
		cout << "3. Chen sinh vien vao giua danh sach \n";
		cout << "4. Xoa sinh vien o dau \n";
		cout << "5. Xoa sinh vien o cuoi\n";
		cout << "6. Xoa sinh vien o giua \n";
		cout << "7. Duyet danh sach lien ket \n";
		cout << "Nhap lua chon: ";
		int lc; cin >> lc;
		if(lc == 1){
			insertFirst(head);
		} 
		else if(lc == 2){
			insertLast(head);
		}
		else if(lc == 3){
			int pos; cout << "Nhap vi tri can chen: "; cin >> pos;
			insertPos(head, pos);
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
			inDs(head);
		}
	}
}





