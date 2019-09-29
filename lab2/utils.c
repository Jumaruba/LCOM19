#include <lcom/lcf.h>
#include <stdint.h>

int(util_get_LSB)(uint16_t val, uint8_t *lsb) {
	if(lsb == NULL){
		printf("Err: trying to write in null pointer");
		return 1;
	}
	*lsb = (uint8_t) (val & 0x00FF);
  return 0; 
}

int(util_get_MSB)(uint16_t val, uint8_t *msb) {
	if(msb == NULL){
		printf("Err: trying to write in null pointer\n");
		return 1;
	}
	*msb = (uint8_t) ((val & 0xFF00) >> 8);
  return 0;
}

int (util_sys_inb)(int port, uint8_t *value) {
  /* To be implemented by the students */
  printf("%s is not yet implemented!\n", __func__);

  return 1;
}

char * (to_binary)(uint32_t size,uint32_t n){ 
	char * buffer;
	buffer = (char*) malloc(sizeof(char)*(size+1));
	int c;
	uint32_t temp,k;
	for(c = size-1,k=0;c>=0;c--,k++){
		temp = n >> c;
		if(temp & 1)
			*(buffer+k) = '1';
		else
			*(buffer+k) = '0';
	}
	return buffer;
}

