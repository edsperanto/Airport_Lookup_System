/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "airports.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

airportsRet *
airports_near_coord_1(placesArg *argp, CLIENT *clnt)
{
	static airportsRet clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, AIRPORTS_NEAR_COORD,
		(xdrproc_t) xdr_placesArg, (caddr_t) argp,
		(xdrproc_t) xdr_airportsRet, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}