// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch132Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 8;
signed long int var_1_4 = 128;
unsigned char var_1_5 = 0;
unsigned char var_1_7 = 100;
unsigned char var_1_8 = 2;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 128;
unsigned char var_1_12 = 4;
unsigned char var_1_13 = 32;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 0;
signed char var_1_16 = 25;
signed char var_1_18 = 8;
signed char var_1_19 = -8;
float var_1_20 = 0.75;
float var_1_21 = 2.25;
float var_1_22 = 3.8;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned short int var_1_25 = 0;
unsigned short int var_1_26 = 10;
unsigned short int var_1_27 = 32;
float var_1_28 = 31.8;
float var_1_29 = 0.0;
float var_1_30 = 99999999.6;
float var_1_31 = 63.8;
signed char var_1_32 = -10;
signed char var_1_33 = 100;
float var_1_34 = 1000000000000.5;
float var_1_35 = 1.4;
float var_1_36 = 10.625;
signed short int var_1_37 = 4;
unsigned short int var_1_38 = 2;
signed long int var_1_39 = -50;
signed short int var_1_40 = 5;
signed long int var_1_41 = 8;
float var_1_42 = 99.8;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_5 = 0;
unsigned char last_1_var_1_9 = 1;
unsigned char last_1_var_1_10 = 0;
unsigned char last_1_var_1_13 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch132Filler_PE_CN
	signed long int stepLocal_0 = /* 77L, 4L, 11L, 274L, 288L, 976L, 1005L) */ ((last_1_var_1_10) + (last_1_var_1_13));
	/* 89L, 30L, 272L, 286L, 986L, 1020L) */ if (/* 84L, 9L, 10L, 273L, 287L, 981L, 1015L) */ ((stepLocal_0) > (/* 83L, 8L, 14L, 277L, 291L, 980L, 1014L) */ ((var_1_4) + (/* 82L, 7L, 16L, 279L, 293L, 979L, 1013L) */ (abs (256))))))) {
		/* 88L, 29L, 281L, 295L, 985L, 1019L) */ var_1_1 = (
			-1
		);
	}


	// From: Req5Batch132Filler_PE_CN
	signed long int stepLocal_5 = /* 4L, 142L, 146L, 630L, 657L, 919L, 1086L) */ ((last_1_var_1_5) * (var_1_12));
	signed long int stepLocal_4 = var_1_15;
	unsigned char stepLocal_3 = var_1_14;
	/* 39L, 180L, 624L, 651L, 940L, 1113L) */ if (/* 17L, 133L, 134L, 625L, 652L, 915L, 1093L) */ ((last_1_var_1_9) || (stepLocal_3))) {
		/* 38L, 178L, 628L, 655L, 939L, 1112L) */ if (/* 21L, 144L, 145L, 629L, 656L, 922L, 1096L) */ ((stepLocal_5) >= (last_1_var_1_10))) {
			/* 33L, 172L, 634L, 661L, 934L, 1107L) */ if (/* 24L, 157L, 158L, 635L, 662L, 925L, 1098L) */ ((var_1_4) >= (stepLocal_4))) {
				/* 28L, 167L, 638L, 665L, 929L, 1102L) */ var_1_13 = (
					32
				);
			} else {
				/* 32L, 171L, 642L, 669L, 933L, 1106L) */ var_1_13 = (
					var_1_7
				);
			}
		} else {
			/* 37L, 177L, 646L, 673L, 938L, 1111L) */ var_1_13 = (
				64
			);
		}
	}


	// From: Req2Batch132Filler_PE_CN
	signed long int stepLocal_1 = var_1_1;
	/* 1045L, 73L, 328L, 349L) */ if (/* 1034L, 44L, 45L, 329L, 350L) */ ((stepLocal_1) <= (/* 1033L, 43L, 47L, 331L, 352L) */ ((/* 1029L, 39L, 48L, 332L, 353L) */ ((var_1_13) * (var_1_1))) * (/* 1032L, 42L, 51L, 335L, 356L) */ (min (/* 1032L, 42L, 51L, 335L, 356L) */ (var_1_1) , (var_1_13)))))))) {
		/* 1040L, 68L, 338L, 359L) */ var_1_5 = (
			/* 1039L, 67L, 341L, 362L) */ ((
				var_1_7
			) + (
				var_1_8
			))
		);
	} else {
		/* 1044L, 72L, 344L, 365L) */ var_1_5 = (
			var_1_7
		);
	}


	// From: Req3Batch132Filler_PE_CN
	/* 1053L, 83L, 416L, 426L) */ var_1_9 = (
		/* 1056L, 82L, 419L, 429L) */ (! (
			0
		))
	);


	// From: Req6Batch132Filler_PE_CN
	/* 1121L, 233L, 734L, 761L) */ if (/* 1122L, 188L, 189L, 735L, 762L) */ ((var_1_5) != (var_1_13))) {
		/* 1125L, 210L, 738L, 765L) */ if (/* 1126L, 197L, 198L, 739L, 766L) */ ((var_1_5) <= (var_1_1))) {
			/* 1129L, 209L, 742L, 769L) */ var_1_16 = (
				/* 1132L, 208L, 745L, 772L) */ ((
					var_1_18
				) + (
					var_1_19
				))
			);
		}
	} else {
		/* 1135L, 231L, 748L, 775L) */ if (/* 1136L, 216L, 217L, 749L, 776L) */ ((/* 1137L, 214L, 218L, 750L, 777L) */ (min (/* 1137L, 214L, 218L, 750L, 777L) */ (var_1_5) , (var_1_7)))) > (var_1_11))) {
			/* 1141L, 230L, 754L, 781L) */ var_1_16 = (
				var_1_19
			);
		}
	}


	// From: Req7Batch132Filler_PE_CN
	signed long int stepLocal_6 = var_1_1;
	/* 1164L, 268L, 840L, 858L) */ if (/* 1150L, 245L, 246L, 841L, 859L) */ ((5) <= (stepLocal_6))) {
		/* 1163L, 266L, 844L, 862L) */ if (var_1_9) {
			/* 1157L, 260L, 846L, 864L) */ var_1_20 = (
				/* 1156L, 259L, 849L, 867L) */ (max (
					/* 1156L, 259L, 849L, 867L) */ (
						var_1_21
					) , (
						10.8f
					)
				))
			);
		} else {
			/* 1162L, 265L, 852L, 870L) */ var_1_20 = (
				/* 1161L, 264L, 855L, 873L) */ (abs (
					var_1_21
				))
			);
		}
	}


	// From: Req4Batch132Filler_PE_CN
	signed long int stepLocal_2 = /* 1060L, 103L, 107L, 457L, 473L) */ (- (/* 1061L, 102L, 108L, 458L, 474L) */ ((var_1_1) ^ (var_1_13))));
	/* 1075L, 125L, 452L, 468L) */ if (var_1_9) {
		/* 1074L, 123L, 454L, 470L) */ if (/* 1067L, 104L, 105L, 455L, 471L) */ ((var_1_7) != (stepLocal_2))) {
			/* 1073L, 122L, 461L, 477L) */ var_1_10 = (
				/* 1072L, 121L, 464L, 480L) */ ((
					var_1_11
				) - (
					var_1_12
				))
			);
		}
	}


	// From: CodeObject1
	/* 157L) */ if (/* 113L, 112L) */ ((var_1_23) && (var_1_24))) {
		/* 155L) */ if (/* 124L, 123L) */ ((var_1_25) <= (/* 126L, 122L) */ ((var_1_26) % (var_1_27))))) {
			/* 142L) */ var_1_22 = (
				/* 141L) */ ((
					/* 137L) */ (abs (
						var_1_28
					))
				) - (
					/* 140L) */ ((
						var_1_29
					) - (
						var_1_30
					))
				))
			);
		} else {
			/* 154L) */ var_1_22 = (
				/* 153L) */ (min (
					/* 153L) */ (
						/* 151L) */ (max (
							/* 151L) */ (
								/* 147L) */ (max (
									/* 147L) */ (
										var_1_30
									) , (
										var_1_28
									)
								))
							) , (
								/* 150L) */ ((
									var_1_29
								) - (
									0.5f
								))
							)
						))
					) , (
						var_1_31
					)
				))
			);
		}
	}


	// From: CodeObject2
	/* 164L) */ var_1_32 = (
		var_1_33
	);


	// From: CodeObject3
	/* 195L) */ if (var_1_24) {
		/* 193L) */ if (/* 175L, 174L) */ ((var_1_33) < (var_1_32))) {
			/* 188L) */ var_1_34 = (
				/* 187L) */ ((
					var_1_30
				) + (
					/* 186L) */ ((
						var_1_35
					) + (
						var_1_36
					))
				))
			);
		} else {
			/* 192L) */ var_1_34 = (
				var_1_35
			);
		}
	}


	// From: CodeObject4
	/* 248L) */ if (var_1_23) {
		/* 246L) */ if (/* 207L, 206L) */ ((var_1_27) < (var_1_26))) {
			/* 244L) */ if (/* 217L, 216L) */ (! (/* 218L, 215L) */ ((var_1_27) <= (var_1_25))))) {
				/* 238L) */ if (/* 228L, 227L) */ ((var_1_38) <= (var_1_26))) {
					/* 237L) */ var_1_37 = (
						var_1_33
					);
				}
			} else {
				/* 243L) */ var_1_37 = (
					var_1_33
				);
			}
		}
	}


	// From: CodeObject5
	/* 300L) */ if (/* 258L, 257L) */ ((/* 259L, 255L) */ (~ (/* 260L, 254L) */ ((var_1_40) >> (var_1_41))))) <= (var_1_25))) {
		/* 298L) */ if (/* 278L, 277L) */ ((/* 279L, 272L) */ ((63.5f) * (var_1_28))) < (/* 282L, 276L) */ ((var_1_30) - (/* 284L, 275L) */ (abs (var_1_42))))))) {
			/* 297L) */ var_1_39 = (
				var_1_32
			);
		}
	}


	// From: CodeObject6
	/* 349L) */ if (/* 310L, 309L) */ ((/* 311L, 306L) */ (max (/* 311L, 306L) */ (var_1_34) , (1.2f)))) > (/* 314L, 308L) */ (- (var_1_30))))) {
		/* 347L) */ if (/* 329L, 328L) */ ((/* 330L, 324L) */ ((4.1850000000000005f) - (var_1_30))) >= (/* 333L, 327L) */ ((4.8f) - (var_1_29))))) {
			/* 346L) */ var_1_43 = (
				var_1_44
			);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 127);
	assume_abort_if_not(var_1_11 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483648);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -63);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65535);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65535);
	var_1_27 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 65535);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 4611686.018427383000e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -230584.3009213691400e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 65535);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 32767);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 14);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_5 = var_1_5;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_13 = var_1_13;
}

int property(void) {
	if (/* 352L, 9L, 18L, 301L, 315L, 997L, 1169L, 101L) */ ((/* 353L, 4L, 19L, 302L, 316L, 992L, 1170L, 96L) */ ((last_1_var_1_10) + (last_1_var_1_13))) > (/* 358L, 8L, 22L, 305L, 319L, 996L, 1175L, 100L) */ ((var_1_4) + (/* 360L, 7L, 24L, 307L, 321L, 995L, 1177L, 99L) */ (abs (256))))))) {
	}
	if (/* 368L, 44L, 54L, 371L, 392L, 1185L) */ ((var_1_1) <= (/* 370L, 43L, 56L, 373L, 394L, 1187L) */ ((/* 371L, 39L, 57L, 374L, 395L, 1188L) */ ((var_1_13) * (var_1_1))) * (/* 374L, 42L, 60L, 377L, 398L, 1191L) */ (min (/* 374L, 42L, 60L, 377L, 398L, 1191L) */ (var_1_1) , (var_1_13)))))))) {
	} else {
	}
	if (var_1_9) {
		if (/* 401L, 104L, 111L, 487L, 503L, 1218L) */ ((var_1_7) != (/* 403L, 103L, 113L, 489L, 505L, 1220L) */ (- (/* 404L, 102L, 114L, 490L, 506L, 1221L) */ ((var_1_1) ^ (var_1_13))))))) {
		}
	}
	if (/* 415L, 133L, 137L, 679L, 706L, 945L, 1232L, 45L) */ ((last_1_var_1_9) || (var_1_14))) {
		if (/* 420L, 144L, 150L, 683L, 710L, 952L, 1237L, 52L) */ ((/* 421L, 142L, 151L, 684L, 711L, 949L, 1238L, 49L) */ ((last_1_var_1_5) * (var_1_12))) >= (last_1_var_1_10))) {
			if (/* 428L, 157L, 161L, 689L, 716L, 955L, 1245L, 55L) */ ((var_1_4) >= (var_1_15))) {
			} else {
			}
		} else {
		}
	}
	if (/* 447L, 188L, 192L, 789L, 816L, 1264L) */ ((var_1_5) != (var_1_13))) {
		if (/* 451L, 197L, 201L, 793L, 820L, 1268L) */ ((var_1_5) <= (var_1_1))) {
		}
	} else {
		if (/* 461L, 216L, 222L, 803L, 830L, 1278L) */ ((/* 462L, 214L, 223L, 804L, 831L, 1279L) */ (min (/* 462L, 214L, 223L, 804L, 831L, 1279L) */ (var_1_5) , (var_1_7)))) > (var_1_11))) {
		}
	}
	if (/* 472L, 245L, 249L, 877L, 895L, 1289L) */ ((5) <= (var_1_1))) {
		if (var_1_9) {
		} else {
		}
	}
	return /* 494L) */ ((
	/* 493L) */ ((
		/* 492L) */ ((
			/* 491L) */ ((
				/* 490L) */ ((
					/* 489L) */ ((
						/* 351L, 31L, 300L, 314L, 1002L, 1168L, 106L) */ ((
							/* 352L, 9L, 18L, 301L, 315L, 997L, 1169L, 101L) */ ((
								/* 353L, 4L, 19L, 302L, 316L, 992L, 1170L, 96L) */ ((
									last_1_var_1_10
								) + (
									last_1_var_1_13
								))
							) > (
								/* 358L, 8L, 22L, 305L, 319L, 996L, 1175L, 100L) */ ((
									var_1_4
								) + (
									/* 360L, 7L, 24L, 307L, 321L, 995L, 1177L, 99L) */ (abs (
										256
									))
								))
							))
						) ? (
							/* 362L, 29L, 309L, 323L, 1001L, 1179L, 105L) */ ((
								var_1_1
							) == (
								/* 362L, 29L, 309L, 323L, 1001L, 1179L, 105L) */ ((signed long int) (
									-1
								))
							))
						) : (
							1
						))
					) && (
						/* 367L, 74L, 370L, 391L, 1184L) */ ((
							/* 368L, 44L, 54L, 371L, 392L, 1185L) */ ((
								var_1_1
							) <= (
								/* 370L, 43L, 56L, 373L, 394L, 1187L) */ ((
									/* 371L, 39L, 57L, 374L, 395L, 1188L) */ ((
										var_1_13
									) * (
										var_1_1
									))
								) * (
									/* 374L, 42L, 60L, 377L, 398L, 1191L) */ (min (
										/* 374L, 42L, 60L, 377L, 398L, 1191L) */ (
											var_1_1
										) , (
											var_1_13
										)
									))
								))
							))
						) ? (
							/* 377L, 68L, 380L, 401L, 1194L) */ ((
								var_1_5
							) == (
								/* 377L, 68L, 380L, 401L, 1194L) */ ((unsigned char) (
									/* 380L, 67L, 383L, 404L, 1197L) */ ((
										var_1_7
									) + (
										var_1_8
									))
								))
							))
						) : (
							/* 383L, 72L, 386L, 407L, 1200L) */ ((
								var_1_5
							) == (
								/* 383L, 72L, 386L, 407L, 1200L) */ ((unsigned char) (
									var_1_7
								))
							))
						))
					))
				) && (
					/* 392L, 83L, 436L, 446L, 1209L) */ ((
						var_1_9
					) == (
						/* 392L, 83L, 436L, 446L, 1209L) */ ((unsigned char) (
							/* 395L, 82L, 439L, 449L, 1212L) */ (! (
								0
							))
						))
					))
				))
			) && (
				/* 398L, 126L, 484L, 500L, 1215L) */ ((
					var_1_9
				) ? (
					/* 400L, 124L, 486L, 502L, 1217L) */ ((
						/* 401L, 104L, 111L, 487L, 503L, 1218L) */ ((
							var_1_7
						) != (
							/* 403L, 103L, 113L, 489L, 505L, 1220L) */ (- (
								/* 404L, 102L, 114L, 490L, 506L, 1221L) */ ((
									var_1_1
								) ^ (
									var_1_13
								))
							))
						))
					) ? (
						/* 407L, 122L, 493L, 509L, 1224L) */ ((
							var_1_10
						) == (
							/* 407L, 122L, 493L, 509L, 1224L) */ ((unsigned char) (
								/* 410L, 121L, 496L, 512L, 1227L) */ ((
									var_1_11
								) - (
									var_1_12
								))
							))
						))
					) : (
						1
					))
				) : (
					1
				))
			))
		) && (
			/* 414L, 181L, 678L, 705L, 970L, 1231L, 70L) */ ((
				/* 415L, 133L, 137L, 679L, 706L, 945L, 1232L, 45L) */ ((
					last_1_var_1_9
				) || (
					var_1_14
				))
			) ? (
				/* 419L, 179L, 682L, 709L, 969L, 1236L, 69L) */ ((
					/* 420L, 144L, 150L, 683L, 710L, 952L, 1237L, 52L) */ ((
						/* 421L, 142L, 151L, 684L, 711L, 949L, 1238L, 49L) */ ((
							last_1_var_1_5
						) * (
							var_1_12
						))
					) >= (
						last_1_var_1_10
					))
				) ? (
					/* 427L, 173L, 688L, 715L, 964L, 1244L, 64L) */ ((
						/* 428L, 157L, 161L, 689L, 716L, 955L, 1245L, 55L) */ ((
							var_1_4
						) >= (
							var_1_15
						))
					) ? (
						/* 431L, 167L, 692L, 719L, 959L, 1248L, 59L) */ ((
							var_1_13
						) == (
							/* 431L, 167L, 692L, 719L, 959L, 1248L, 59L) */ ((unsigned char) (
								32
							))
						))
					) : (
						/* 435L, 171L, 696L, 723L, 963L, 1252L, 63L) */ ((
							var_1_13
						) == (
							/* 435L, 171L, 696L, 723L, 963L, 1252L, 63L) */ ((unsigned char) (
								var_1_7
							))
						))
					))
				) : (
					/* 439L, 177L, 700L, 727L, 968L, 1256L, 68L) */ ((
						var_1_13
					) == (
						/* 439L, 177L, 700L, 727L, 968L, 1256L, 68L) */ ((unsigned char) (
							64
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 446L, 234L, 788L, 815L, 1263L) */ ((
			/* 447L, 188L, 192L, 789L, 816L, 1264L) */ ((
				var_1_5
			) != (
				var_1_13
			))
		) ? (
			/* 450L, 211L, 792L, 819L, 1267L) */ ((
				/* 451L, 197L, 201L, 793L, 820L, 1268L) */ ((
					var_1_5
				) <= (
					var_1_1
				))
			) ? (
				/* 454L, 209L, 796L, 823L, 1271L) */ ((
					var_1_16
				) == (
					/* 454L, 209L, 796L, 823L, 1271L) */ ((signed char) (
						/* 457L, 208L, 799L, 826L, 1274L) */ ((
							var_1_18
						) + (
							var_1_19
						))
					))
				))
			) : (
				1
			))
		) : (
			/* 460L, 232L, 802L, 829L, 1277L) */ ((
				/* 461L, 216L, 222L, 803L, 830L, 1278L) */ ((
					/* 462L, 214L, 223L, 804L, 831L, 1279L) */ (min (
						/* 462L, 214L, 223L, 804L, 831L, 1279L) */ (
							var_1_5
						) , (
							var_1_7
						)
					))
				) > (
					var_1_11
				))
			) ? (
				/* 466L, 230L, 808L, 835L, 1283L) */ ((
					var_1_16
				) == (
					/* 466L, 230L, 808L, 835L, 1283L) */ ((signed char) (
						var_1_19
					))
				))
			) : (
				1
			))
		))
	))
) && (
	/* 471L, 269L, 876L, 894L, 1288L) */ ((
		/* 472L, 245L, 249L, 877L, 895L, 1289L) */ ((
			5
		) <= (
			var_1_1
		))
	) ? (
		/* 475L, 267L, 880L, 898L, 1292L) */ ((
			var_1_9
		) ? (
			/* 477L, 260L, 882L, 900L, 1294L) */ ((
				var_1_20
			) == (
				/* 477L, 260L, 882L, 900L, 1294L) */ ((float) (
					/* 480L, 259L, 885L, 903L, 1297L) */ (max (
						/* 480L, 259L, 885L, 903L, 1297L) */ (
							var_1_21
						) , (
							10.8f
						)
					))
				))
			))
		) : (
			/* 483L, 265L, 888L, 906L, 1300L) */ ((
				var_1_20
			) == (
				/* 483L, 265L, 888L, 906L, 1300L) */ ((float) (
					/* 486L, 264L, 891L, 909L, 1303L) */ (abs (
						var_1_21
					))
				))
			))
		))
	) : (
		1
	))
))
;
}
int main(void) {
	isInitial = 1;
	initially();

	while (1) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
