#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>

extern int add(int a, int b);
extern pid_t get_pid();
extern uid_t get_uid();
extern int open_file(const char *filename);
extern int get_cwd(char *g_buffer);
extern int mk_dir(char *g_buffer);
extern int ch_dir(char *g_buffer);
extern int w_file(uint8_t fd, const char *text_f, size_t size);
extern int close_fd(uint8_t fd); 

int main(){
	int a = 2;
	int b = 4;
	int res = add(a, b);

	char *text_f;
	text_f = "Hello World !!\n\0";
	
	char *dir_name;
	dir_name = "test_dir";
	
	char *filename;
	filename = "test.txt\0";
	
	char g_buffer[255];
	

	pid_t cur_pid = get_pid();
	uid_t usr_id = get_uid();
	get_cwd(g_buffer);
	mk_dir(dir_name);
	printf("cwd : %s \n", g_buffer);

	strcat(g_buffer, "/");
	strcat(g_buffer, dir_name);
	strcat(g_buffer, "/");
	
	//printf("%ld \n", sizeof(g_buffer));
	
	ch_dir(g_buffer);
	printf("res : %d \npid : %d \nuser id : %i \ncwd : %s \n", res, cur_pid, usr_id, g_buffer);
	
	uint8_t fd = open_file(filename);
	//int test_testow = (strlen(text_f)+ 1);
	//printf("fd : %d \n", fd);
	w_file(fd, text_f, strlen(text_f));
	close_fd(fd);
}
