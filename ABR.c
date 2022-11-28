void ABR (void){
	char fixed_buf[8],value;
	value = fixed_buf[-1];											/*ABR*/
	value = fixed_buf[10];											/*ABR*/
	sprintf (fixed_buf ,"Meteonic Innovation Pvt Limited \n");				/*ABR*/
}

void ABV_stack( int local_value ){
	int local_array[10];												
	local_array[local_value]=0;										/*ABV_stack*/
}

int check_ABV(void){
	ABV_stack(12);
	return 1;
}

int NNTS(void){
	char buf[8] = "a";
	char tgt[1024];
	char * src = "abcdef";
	strncpy(buf, src, 3);											/*Non Null Terminated String */
	strcpy(tgt, buf);
 return 0;
}

 void Unbound (void ){
 
	char FIXEDbuf[12];
	char *POINTERbuf;
	strcpy(FIXEDbuf, "Something rather large");							/*Doesnt check buffer */
	strcpy(POINTERbuf, "Something very large as well");
}
