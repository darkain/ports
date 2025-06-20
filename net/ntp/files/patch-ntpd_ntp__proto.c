--- ntpd/ntp_proto.c.orig	2023-10-04 04:01:52 UTC
+++ ntpd/ntp_proto.c
@@ -2265,14 +2265,16 @@ receive(
 	 * Currently this kiss code will accept whatever valid poll
 	 * rate that the server sends
 	 */
+/*
 	if (   (NTP_MINPOLL > pkt->ppoll)
 	    || (NTP_MAXPOLL < pkt->ppoll)
 	   ) {
 		DPRINTF(2, ("RATEKISS: Invalid ppoll (%d) from %s\n",
 				pkt->ppoll, stoa(&rbufp->recv_srcadr)));
 		sys_badlength++;
-		return;			/* invalid packet poll */
+		return;			/ * invalid packet poll * /
 	}
+*/
 	peer->ppoll = max(peer->minpoll, pkt->ppoll);
 	if (kissCode == RATEKISS) {
 		peer->selbroken++;	/* Increment the KoD count */
