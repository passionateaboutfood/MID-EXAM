#include"object.h

Pasien* createNewPasien(int date,int year,char *month,char *name){
    Pasien *temp = (Pasien *)malloc(sizeof(Pasien);
    temp->date = date;
    temp->year = year;
    strcpy(temp->month,month);
    strcpy(temp->name,name);

    temp->next = NULL;
    temp->prev = NULL;

    return temp;
    
}

void pushPQ(int date,int year,char *month,char *name){
Pasien *temp = (Pasien *)malloc(sizeof(Pasien);
  if(!head){
        head = tail = temp;
    }
    else if(year < head->year){
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    else if(year > tail->year){
        temp->prev = tail;
        tail->next = temp;
        tail = temp;

    }else{
        Pasien *curr = head;

        while(curr && curr->next->year < temp->year){
            curr = curr->next;
        }
        curr->next->prev = temp;
        temp->next = curr->next; 
        curr->next = temp;
        temp->prev = curr;
    }
}


int main()
{    
    int n,cr;
    scanf("%d %d",&n,&cr);
    for(int i  =0;i<n;i++){
        scanf("%d %s %d - %[^\n]",Pasien.age,Pasien.month,Pasien.year,Pasien.name);
        push
    }

    return 0;
}