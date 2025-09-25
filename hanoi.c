#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define N 5

struct tower{
	int disks[N];
	int height;
};

typedef struct tower* Tower;

Tower new_tower(){
	Tower t = (Tower)malloc(sizeof(struct tower));
	t->height = 0;
	return t;
}

int top_disk_size(Tower t){
	if(t->height > 0)
		return t->disks[t->height-1];
	else return 0;
}

int take_disk(Tower t){
	int disk_size = 0;
	if(t->height > 0){
		disk_size = top_disk_size(t);
		t->height = t->height -1;
	}
	return  disk_size;
}

bool is_full(Tower t){
	return t->height == N;
}

bool is_empty(Tower t){
	return t->height == 0;
}

bool place_disk(Tower t, int disk_size){
	if(!is_full(t) && (is_empty(t) || top_disk_size(t) >= disk_size)){
		t->disks[t->height] = disk_size;
		t->height = t->height + 1;
		return true;
	}
	return false;
}

void print_tower(Tower t, char* name){
	printf("%s:\n\n", name);
	for(int i=N-1; i>=0; i--){
		if(i <= t->height-1){
			for(int j=0; j<N-t->disks[i]+1; j++)
				printf(" ");
			for(int j=0; j<t->disks[i]; j++)
				printf("##");
		}
		else{
			for(int j=0; j<N+1; j++)
				printf(" ");
		}
		printf("#\n");
	}
	printf("\n");
}

void main(void){
	Tower t1 = new_tower();
	for(int i=0; i<N; i++){
		place_disk(t1, N-i);
	}
	Tower t2 = new_tower();
	Tower t3 = new_tower();

	printf("\e[1;1H\e[2J");
	print_tower(t1, "Source Tower");
	print_tower(t2, "Destination Tower");
	print_tower(t3, "Support Tower");
}
