/* 
 * static int
 * wrap_fork(void) {
 *	int rc = -1;
 */

	rc = real_fork();
	if (rc == 0)
		pseudo_client_reset();

/*	return rc;
 * }
 */