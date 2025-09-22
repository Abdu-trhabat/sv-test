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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch72Filler_PE_CO.c", 13, "reach_error"); }
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
signed short int var_1_1 = 16;
double var_1_2 = 4.125;
double var_1_3 = 2.75;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 100;
unsigned long int var_1_6 = 0;
signed short int var_1_7 = 64;
signed short int var_1_8 = -128;
signed short int var_1_9 = 1;
signed char var_1_10 = 2;
signed char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
float var_1_14 = 64.3;
double var_1_15 = 100.25;
signed char var_1_16 = 32;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
double var_1_20 = 9.25;
double var_1_21 = 255.05;
double var_1_22 = 25.5;
unsigned char var_1_23 = 2;
unsigned long int var_1_24 = 1;
unsigned char var_1_25 = 1;
unsigned short int var_1_26 = 5;
unsigned char var_1_27 = 128;
unsigned char var_1_28 = 1;
signed long int var_1_29 = 128;
signed long int var_1_30 = -64;
unsigned long int var_1_31 = 1;
unsigned long int var_1_32 = 64;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned long int var_1_37 = 3773873024;
unsigned long int var_1_38 = 2296504360;
unsigned long int var_1_39 = 16;
unsigned long int var_1_40 = 2753961414;
unsigned char var_1_41 = 8;
unsigned char var_1_42 = 25;
signed short int var_1_43 = -50;
signed char var_1_44 = -1;
signed char var_1_45 = 4;
signed char var_1_46 = -1;
double var_1_47 = 255.2;
double var_1_48 = 0.09999999999999998;
double var_1_49 = 49.875;
double var_1_50 = 50.4;
double var_1_51 = 49.25;
double var_1_52 = 1000000.4;
double var_1_53 = 256.2;
signed char var_1_54 = -8;
signed char var_1_55 = 25;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch72Filler_PE_CO
	/* 1225L, 137L, 717L, 758L) */ if (/* 1226L, 69L, 70L, 718L, 759L) */ ((/* 1227L, 67L, 71L, 719L, 760L) */ ((var_1_4) * (var_1_5))) <= (var_1_6))) {
		/* 1231L, 85L, 723L, 764L) */ var_1_10 = (
			/* 1234L, 84L, 726L, 767L) */ ((
				var_1_11
			) + (
				10
			))
		);
	} else {
		/* 1237L, 135L, 729L, 770L) */ if (/* 1238L, 88L, 89L, 730L, 771L) */ ((var_1_12) || (var_1_13))) {
			/* 1241L, 129L, 733L, 774L) */ if (/* 1242L, 102L, 103L, 734L, 775L) */ ((/* 1243L, 98L, 104L, 735L, 776L) */ ((/* 1244L, 96L, 105L, 736L, 777L) */ (abs (var_1_2))) - (var_1_14))) == (/* 1247L, 101L, 108L, 739L, 780L) */ ((var_1_3) + (var_1_15))))) {
				/* 1250L, 124L, 742L, 783L) */ var_1_10 = (
					/* 1253L, 123L, 745L, 786L) */ ((
						var_1_11
					) + (
						var_1_16
					))
				);
			} else {
				/* 1256L, 128L, 748L, 789L) */ var_1_10 = (
					var_1_11
				);
			}
		} else {
			/* 1260L, 134L, 752L, 793L) */ var_1_10 = (
				var_1_16
			);
		}
	}


	// From: Req3Batch72Filler_PE_CO
	/* 1268L, 150L, 883L, 893L) */ var_1_17 = (
		/* 1271L, 149L, 886L, 896L) */ ((
			var_1_18
		) && (
			var_1_19
		))
	);


	// From: Req4Batch72Filler_PE_CO
	/* 1276L, 173L, 921L, 932L) */ if (/* 1277L, 162L, 163L, 922L, 933L) */ (! (var_1_18))) {
		/* 1279L, 172L, 924L, 935L) */ var_1_20 = (
			/* 1282L, 171L, 927L, 938L) */ (max (
				/* 1282L, 171L, 927L, 938L) */ (
					var_1_21
				) , (
					var_1_22
				)
			))
		);
	}


	// From: Req5Batch72Filler_PE_CO
	/* 1287L, 200L, 989L, 1001L) */ if (/* 1288L, 185L, 186L, 990L, 1002L) */ ((/* 1289L, 183L, 187L, 991L, 1003L) */ ((var_1_4) + (var_1_5))) > (var_1_24))) {
		/* 1293L, 199L, 995L, 1007L) */ var_1_23 = (
			var_1_25
		);
	}


	// From: Req6Batch72Filler_PE_CO
	/* 1299L, 252L, 1037L, 1063L) */ if (/* 1300L, 210L, 211L, 1038L, 1064L) */ ((256) >= (var_1_7))) {
		/* 1303L, 246L, 1041L, 1067L) */ if (/* 1304L, 223L, 224L, 1042L, 1068L) */ ((var_1_17) && (/* 1306L, 222L, 226L, 1044L, 1070L) */ ((var_1_25) >= (/* 1308L, 221L, 228L, 1046L, 1072L) */ ((var_1_27) - (var_1_28))))))) {
			/* 1311L, 241L, 1049L, 1075L) */ var_1_26 = (
				16
			);
		} else {
			/* 1315L, 245L, 1053L, 1079L) */ var_1_26 = (
				var_1_28
			);
		}
	} else {
		/* 1319L, 251L, 1057L, 1083L) */ var_1_26 = (
			var_1_25
		);
	}


	// From: Req7Batch72Filler_PE_CO
	/* 1325L, 263L, 1141L, 1147L) */ var_1_29 = (
		var_1_30
	);


	// From: Req8Batch72Filler_PE_CO
	/* 1331L, 273L, 1165L, 1171L) */ var_1_31 = (
		var_1_26
	);


	// From: Req1Batch72Filler_PE_CO
	unsigned long int stepLocal_0 = /* 1189L, 25L, 30L, 352L, 384L) */ ((var_1_4) * (var_1_5));
	/* 1220L, 59L, 342L, 374L) */ if (/* 1199L, 8L, 9L, 343L, 375L) */ ((/* 1195L, 4L, 10L, 344L, 376L) */ (min (/* 1195L, 4L, 10L, 344L, 376L) */ (var_1_20) , (63.5)))) > (/* 1198L, 7L, 13L, 347L, 379L) */ ((2.4) * (var_1_20))))) {
		/* 1215L, 53L, 350L, 382L) */ if (/* 1202L, 28L, 29L, 351L, 383L) */ ((stepLocal_0) <= (/* 1201L, 27L, 33L, 355L, 387L) */ (~ (var_1_6))))) {
			/* 1210L, 48L, 357L, 389L) */ var_1_1 = (
				/* 1209L, 47L, 360L, 392L) */ ((
					/* 1207L, 45L, 361L, 393L) */ (min (
						/* 1207L, 45L, 361L, 393L) */ (
							var_1_7
						) , (
							var_1_8
						)
					))
				) + (
					var_1_9
				))
			);
		} else {
			/* 1214L, 52L, 365L, 397L) */ var_1_1 = (
				var_1_8
			);
		}
	} else {
		/* 1219L, 58L, 369L, 401L) */ var_1_1 = (
			-50
		);
	}


	// From: CodeObject1
	/* 246L, 31L) */ if (/* 247L, 4L, 5L) */ ((var_1_33) && (var_1_34))) {
		/* 250L, 29L) */ if (/* 251L, 13L, 14L) */ ((var_1_29) <= (var_1_26))) {
			/* 254L, 28L) */ var_1_32 = (
				/* 257L, 27L) */ ((
					/* 258L, 25L) */ (min (
						/* 258L, 25L) */ (
							var_1_37
						) , (
							/* 260L, 24L) */ (abs (
								var_1_38
							))
						)
					))
				) - (
					var_1_29
				))
			);
		}
	}


	// From: CodeObject2
	/* 264L, 75L) */ if (/* 265L, 39L, 40L) */ ((/* 266L, 36L, 41L) */ (- (var_1_38))) <= (/* 268L, 38L, 43L) */ (- (var_1_37))))) {
		/* 270L, 55L) */ var_1_39 = (
			/* 273L, 54L) */ ((
				2368197193u
			) - (
				var_1_29
			))
		);
	} else {
		/* 276L, 73L) */ if (var_1_17) {
			/* 278L, 68L) */ var_1_39 = (
				/* 281L, 67L) */ (min (
					/* 281L, 67L) */ (
						var_1_37
					) , (
						/* 283L, 66L) */ ((
							/* 284L, 64L) */ (max (
								/* 284L, 64L) */ (
									var_1_38
								) , (
									var_1_40
								)
							))
						) - (
							var_1_31
						))
					)
				))
			);
		} else {
			/* 288L, 72L) */ var_1_39 = (
				var_1_40
			);
		}
	}


	// From: CodeObject3
	/* 293L, 84L) */ var_1_41 = (
		var_1_42
	);


	// From: CodeObject4
	/* 307L, 108L) */ if (/* 308L, 93L, 94L) */ ((var_1_37) <= (/* 310L, 92L, 96L) */ (max (/* 310L, 92L, 96L) */ (var_1_39) , (var_1_32)))))) {
		/* 313L, 107L) */ var_1_43 = (
			var_1_42
		);
	}


	// From: CodeObject5
	/* 317L, 148L) */ if (/* 318L, 118L, 119L) */ ((var_1_29) <= (/* 320L, 117L, 121L) */ (max (/* 320L, 117L, 121L) */ (-8) , (/* 322L, 116L, 123L) */ ((var_1_37) ^ (var_1_40)))))))) {
		/* 325L, 142L) */ if (var_1_17) {
			/* 327L, 141L) */ var_1_44 = (
				/* 330L, 140L) */ (max (
					/* 330L, 140L) */ (
						var_1_45
					) , (
						var_1_46
					)
				))
			);
		}
	} else {
		/* 333L, 147L) */ var_1_44 = (
			64
		);
	}


	// From: CodeObject6
	/* 374L, 211L) */ if (/* 375L, 154L, 155L) */ ((var_1_34) || (var_1_33))) {
		/* 378L, 174L) */ if (/* 379L, 163L, 164L) */ ((var_1_45) >= (var_1_46))) {
			/* 382L, 173L) */ var_1_47 = (
				var_1_48
			);
		}
	} else {
		/* 386L, 209L) */ if (var_1_33) {
			/* 388L, 184L) */ var_1_47 = (
				/* 391L, 183L) */ (max (
					/* 391L, 183L) */ (
						var_1_48
					) , (
						var_1_49
					)
				))
			);
		} else {
			/* 394L, 207L) */ if (/* 395L, 187L, 188L) */ ((var_1_38) >= (var_1_42))) {
				/* 398L, 198L) */ var_1_47 = (
					/* 401L, 197L) */ (abs (
						var_1_48
					))
				);
			} else {
				/* 403L, 206L) */ var_1_47 = (
					/* 406L, 205L) */ ((
						var_1_50
					) - (
						/* 408L, 204L) */ (min (
							/* 408L, 204L) */ (
								var_1_51
							) , (
								var_1_52
							)
						))
					))
				);
			}
		}
	}


	// From: CodeObject7
	/* 412L, 218L) */ var_1_53 = (
		5.5
	);


	// From: CodeObject8
	/* 417L, 226L) */ var_1_54 = (
		var_1_55
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967295);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967295);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -16383);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -16383);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -16383);
	assume_abort_if_not(var_1_9 <= 16383);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -63);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967295);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 127);
	assume_abort_if_not(var_1_27 <= 255);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483647);
	assume_abort_if_not(var_1_30 <= 2147483646);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 2147483647);
	assume_abort_if_not(var_1_37 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967294);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967294);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -127);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -127);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -922337.2036854766000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= -922337.2036854766000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 9223372.036854766000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_55 >= -127);
	assume_abort_if_not(var_1_55 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 422L, 8L, 16L, 407L, 439L, 1337L) */ ((/* 423L, 4L, 17L, 408L, 440L, 1338L) */ (min (/* 423L, 4L, 17L, 408L, 440L, 1338L) */ (var_1_20) , (63.5)))) > (/* 426L, 7L, 20L, 411L, 443L, 1341L) */ ((2.4) * (var_1_20))))) {
		if (/* 430L, 28L, 35L, 415L, 447L, 1345L) */ ((/* 431L, 25L, 36L, 416L, 448L, 1346L) */ ((var_1_4) * (var_1_5))) <= (/* 434L, 27L, 39L, 419L, 451L, 1349L) */ (~ (var_1_6))))) {
		} else {
		}
	} else {
	}
	if (/* 455L, 69L, 75L, 800L, 841L, 1370L) */ ((/* 456L, 67L, 76L, 801L, 842L, 1371L) */ ((var_1_4) * (var_1_5))) <= (var_1_6))) {
	} else {
		if (/* 467L, 88L, 92L, 812L, 853L, 1382L) */ ((var_1_12) || (var_1_13))) {
			if (/* 471L, 102L, 111L, 816L, 857L, 1386L) */ ((/* 472L, 98L, 112L, 817L, 858L, 1387L) */ ((/* 473L, 96L, 113L, 818L, 859L, 1388L) */ (abs (var_1_2))) - (var_1_14))) == (/* 476L, 101L, 116L, 821L, 862L, 1391L) */ ((var_1_3) + (var_1_15))))) {
			} else {
			}
		} else {
		}
	}
	if (/* 506L, 162L, 165L, 944L, 955L, 1421L) */ (! (var_1_18))) {
	}
	if (/* 517L, 185L, 191L, 1014L, 1026L, 1432L) */ ((/* 518L, 183L, 192L, 1015L, 1027L, 1433L) */ ((var_1_4) + (var_1_5))) > (var_1_24))) {
	}
	if (/* 529L, 210L, 214L, 1090L, 1116L, 1444L) */ ((256) >= (var_1_7))) {
		if (/* 533L, 223L, 231L, 1094L, 1120L, 1448L) */ ((var_1_17) && (/* 535L, 222L, 233L, 1096L, 1122L, 1450L) */ ((var_1_25) >= (/* 537L, 221L, 235L, 1098L, 1124L, 1452L) */ ((var_1_27) - (var_1_28))))))) {
		} else {
		}
	} else {
	}
	return /* 571L) */ ((
	/* 570L) */ ((
		/* 569L) */ ((
			/* 568L) */ ((
				/* 567L) */ ((
					/* 566L) */ ((
						/* 565L) */ ((
							/* 421L, 60L, 406L, 438L, 1336L) */ ((
								/* 422L, 8L, 16L, 407L, 439L, 1337L) */ ((
									/* 423L, 4L, 17L, 408L, 440L, 1338L) */ (min (
										/* 423L, 4L, 17L, 408L, 440L, 1338L) */ (
											var_1_20
										) , (
											63.5
										)
									))
								) > (
									/* 426L, 7L, 20L, 411L, 443L, 1341L) */ ((
										2.4
									) * (
										var_1_20
									))
								))
							) ? (
								/* 429L, 54L, 414L, 446L, 1344L) */ ((
									/* 430L, 28L, 35L, 415L, 447L, 1345L) */ ((
										/* 431L, 25L, 36L, 416L, 448L, 1346L) */ ((
											var_1_4
										) * (
											var_1_5
										))
									) <= (
										/* 434L, 27L, 39L, 419L, 451L, 1349L) */ (~ (
											var_1_6
										))
									))
								) ? (
									/* 436L, 48L, 421L, 453L, 1351L) */ ((
										var_1_1
									) == (
										/* 436L, 48L, 421L, 453L, 1351L) */ ((signed short int) (
											/* 439L, 47L, 424L, 456L, 1354L) */ ((
												/* 440L, 45L, 425L, 457L, 1355L) */ (min (
													/* 440L, 45L, 425L, 457L, 1355L) */ (
														var_1_7
													) , (
														var_1_8
													)
												))
											) + (
												var_1_9
											))
										))
									))
								) : (
									/* 444L, 52L, 429L, 461L, 1359L) */ ((
										var_1_1
									) == (
										/* 444L, 52L, 429L, 461L, 1359L) */ ((signed short int) (
											var_1_8
										))
									))
								))
							) : (
								/* 448L, 58L, 433L, 465L, 1363L) */ ((
									var_1_1
								) == (
									/* 448L, 58L, 433L, 465L, 1363L) */ ((signed short int) (
										-50
									))
								))
							))
						) && (
							/* 454L, 138L, 799L, 840L, 1369L) */ ((
								/* 455L, 69L, 75L, 800L, 841L, 1370L) */ ((
									/* 456L, 67L, 76L, 801L, 842L, 1371L) */ ((
										var_1_4
									) * (
										var_1_5
									))
								) <= (
									var_1_6
								))
							) ? (
								/* 460L, 85L, 805L, 846L, 1375L) */ ((
									var_1_10
								) == (
									/* 460L, 85L, 805L, 846L, 1375L) */ ((signed char) (
										/* 463L, 84L, 808L, 849L, 1378L) */ ((
											var_1_11
										) + (
											10
										))
									))
								))
							) : (
								/* 466L, 136L, 811L, 852L, 1381L) */ ((
									/* 467L, 88L, 92L, 812L, 853L, 1382L) */ ((
										var_1_12
									) || (
										var_1_13
									))
								) ? (
									/* 470L, 130L, 815L, 856L, 1385L) */ ((
										/* 471L, 102L, 111L, 816L, 857L, 1386L) */ ((
											/* 472L, 98L, 112L, 817L, 858L, 1387L) */ ((
												/* 473L, 96L, 113L, 818L, 859L, 1388L) */ (abs (
													var_1_2
												))
											) - (
												var_1_14
											))
										) == (
											/* 476L, 101L, 116L, 821L, 862L, 1391L) */ ((
												var_1_3
											) + (
												var_1_15
											))
										))
									) ? (
										/* 479L, 124L, 824L, 865L, 1394L) */ ((
											var_1_10
										) == (
											/* 479L, 124L, 824L, 865L, 1394L) */ ((signed char) (
												/* 482L, 123L, 827L, 868L, 1397L) */ ((
													var_1_11
												) + (
													var_1_16
												))
											))
										))
									) : (
										/* 485L, 128L, 830L, 871L, 1400L) */ ((
											var_1_10
										) == (
											/* 485L, 128L, 830L, 871L, 1400L) */ ((signed char) (
												var_1_11
											))
										))
									))
								) : (
									/* 489L, 134L, 834L, 875L, 1404L) */ ((
										var_1_10
									) == (
										/* 489L, 134L, 834L, 875L, 1404L) */ ((signed char) (
											var_1_16
										))
									))
								))
							))
						))
					) && (
						/* 497L, 150L, 903L, 913L, 1412L) */ ((
							var_1_17
						) == (
							/* 497L, 150L, 903L, 913L, 1412L) */ ((unsigned char) (
								/* 500L, 149L, 906L, 916L, 1415L) */ ((
									var_1_18
								) && (
									var_1_19
								))
							))
						))
					))
				) && (
					/* 505L, 174L, 943L, 954L, 1420L) */ ((
						/* 506L, 162L, 165L, 944L, 955L, 1421L) */ (! (
							var_1_18
						))
					) ? (
						/* 508L, 172L, 946L, 957L, 1423L) */ ((
							var_1_20
						) == (
							/* 508L, 172L, 946L, 957L, 1423L) */ ((double) (
								/* 511L, 171L, 949L, 960L, 1426L) */ (max (
									/* 511L, 171L, 949L, 960L, 1426L) */ (
										var_1_21
									) , (
										var_1_22
									)
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 516L, 201L, 1013L, 1025L, 1431L) */ ((
					/* 517L, 185L, 191L, 1014L, 1026L, 1432L) */ ((
						/* 518L, 183L, 192L, 1015L, 1027L, 1433L) */ ((
							var_1_4
						) + (
							var_1_5
						))
					) > (
						var_1_24
					))
				) ? (
					/* 522L, 199L, 1019L, 1031L, 1437L) */ ((
						var_1_23
					) == (
						/* 522L, 199L, 1019L, 1031L, 1437L) */ ((unsigned char) (
							var_1_25
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 528L, 253L, 1089L, 1115L, 1443L) */ ((
				/* 529L, 210L, 214L, 1090L, 1116L, 1444L) */ ((
					256
				) >= (
					var_1_7
				))
			) ? (
				/* 532L, 247L, 1093L, 1119L, 1447L) */ ((
					/* 533L, 223L, 231L, 1094L, 1120L, 1448L) */ ((
						var_1_17
					) && (
						/* 535L, 222L, 233L, 1096L, 1122L, 1450L) */ ((
							var_1_25
						) >= (
							/* 537L, 221L, 235L, 1098L, 1124L, 1452L) */ ((
								var_1_27
							) - (
								var_1_28
							))
						))
					))
				) ? (
					/* 540L, 241L, 1101L, 1127L, 1455L) */ ((
						var_1_26
					) == (
						/* 540L, 241L, 1101L, 1127L, 1455L) */ ((unsigned short int) (
							16
						))
					))
				) : (
					/* 544L, 245L, 1105L, 1131L, 1459L) */ ((
						var_1_26
					) == (
						/* 544L, 245L, 1105L, 1131L, 1459L) */ ((unsigned short int) (
							var_1_28
						))
					))
				))
			) : (
				/* 548L, 251L, 1109L, 1135L, 1463L) */ ((
					var_1_26
				) == (
					/* 548L, 251L, 1109L, 1135L, 1463L) */ ((unsigned short int) (
						var_1_25
					))
				))
			))
		))
	) && (
		/* 554L, 263L, 1153L, 1159L, 1469L) */ ((
			var_1_29
		) == (
			/* 554L, 263L, 1153L, 1159L, 1469L) */ ((signed long int) (
				var_1_30
			))
		))
	))
) && (
	/* 560L, 273L, 1177L, 1183L, 1475L) */ ((
		var_1_31
	) == (
		/* 560L, 273L, 1177L, 1183L, 1475L) */ ((unsigned long int) (
			var_1_26
		))
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
