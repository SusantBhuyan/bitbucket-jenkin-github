#define MYASSERT(x) do {if(!x)) myerror(__FILE__,__LINE__);}while(0);
struct record{
	int file;
	char bills;
};
int assert(void){
	struct record *ptr;
	ptr=malloc(10);
	MYASSERT(ptr!=0);
	ptr->file = 30;
}
	