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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch163Filler_PS_CO.c", 13, "reach_error"); }
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
signed long int var_1_1 = 64;
double var_1_2 = 15.75;
double var_1_3 = 2.5;
signed long int var_1_4 = 0;
signed long int var_1_5 = 4;
signed long int var_1_6 = 25;
signed long int var_1_7 = -2;
unsigned long int var_1_8 = 8;
unsigned char var_1_9 = 1;
unsigned long int var_1_10 = 100;
unsigned long int var_1_11 = 5;
unsigned long int var_1_12 = 3498199434;
unsigned short int var_1_13 = 1;
double var_1_14 = 100000000000000.6;
unsigned short int var_1_15 = 128;
signed short int var_1_16 = -2;
signed long int var_1_17 = 1479159454;
signed short int var_1_19 = 10;
signed short int var_1_20 = 256;
signed short int var_1_21 = 32;
float var_1_22 = 2.75;
unsigned char var_1_23 = 1;
float var_1_24 = 15.5;
float var_1_25 = 8.8;
unsigned char var_1_26 = 1;
unsigned long int var_1_27 = 4;
unsigned char var_1_28 = 0;
unsigned long int var_1_29 = 64;
unsigned long int var_1_30 = 10;
unsigned short int var_1_31 = 500;
unsigned short int var_1_32 = 64;
double var_1_33 = 15.75;
double var_1_34 = 2.5;
double var_1_35 = 5.5;
double var_1_36 = 127.4;
unsigned short int var_1_37 = 5;
signed long int var_1_38 = 16;
unsigned short int var_1_39 = 5;
unsigned short int var_1_40 = 0;
unsigned char var_1_41 = 8;
signed long int var_1_42 = 1757501806;
unsigned char var_1_43 = 5;
unsigned char var_1_44 = 128;
unsigned char var_1_45 = 25;
unsigned char var_1_46 = 50;
double var_1_47 = 127.5;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 0;
double var_1_50 = 31.75;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 245L, 5L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject2
	/* 250L, 13L) */ var_1_31 = (
		var_1_32
	);


	// From: CodeObject3
	/* 254L, 47L) */ if (/* 255L, 22L, 23L) */ ((var_1_8) < (/* 257L, 21L, 25L) */ (max (/* 257L, 21L, 25L) */ (var_1_30) , (var_1_32)))))) {
		/* 260L, 42L) */ var_1_33 = (
			/* 263L, 41L) */ (min (
				/* 263L, 41L) */ (
					/* 264L, 36L) */ (abs (
						var_1_34
					))
				) , (
					/* 266L, 40L) */ (min (
						/* 266L, 40L) */ (
							/* 267L, 38L) */ (abs (
								var_1_35
							))
						) , (
							var_1_36
						)
					))
				)
			))
		);
	} else {
		/* 270L, 46L) */ var_1_33 = (
			var_1_36
		);
	}


	// From: CodeObject4
	/* 276L, 111L) */ if (/* 277L, 55L, 56L) */ ((var_1_36) > (/* 279L, 54L, 58L) */ ((var_1_35) + (7.5))))) {
		/* 282L, 109L) */ if (/* 283L, 72L, 73L) */ ((/* 284L, 68L, 74L) */ (~ (var_1_13))) <= (/* 286L, 71L, 76L) */ ((var_1_32) % (var_1_38))))) {
			/* 289L, 93L) */ var_1_37 = (
				/* 292L, 92L) */ (min (
					/* 292L, 92L) */ (
						/* 293L, 90L) */ (min (
							/* 293L, 90L) */ (
								var_1_32
							) , (
								/* 295L, 89L) */ (abs (
									var_1_39
								))
							)
						))
					) , (
						var_1_40
					)
				))
			);
		} else {
			/* 298L, 107L) */ if (/* 299L, 96L, 97L) */ ((var_1_8) <= (var_1_13))) {
				/* 302L, 106L) */ var_1_37 = (
					64
				);
			}
		}
	}


	// From: CodeObject5
	/* 308L, 156L) */ if (/* 309L, 127L, 128L) */ ((/* 310L, 121L, 129L) */ ((var_1_13) / (var_1_38))) > (/* 313L, 126L, 132L) */ ((/* 314L, 124L, 133L) */ ((var_1_42) - (var_1_40))) - (2))))) {
		/* 318L, 155L) */ var_1_41 = (
			/* 321L, 154L) */ (min (
				/* 321L, 154L) */ (
					var_1_43
				) , (
					/* 323L, 153L) */ (min (
						/* 323L, 153L) */ (
							/* 324L, 151L) */ ((
								var_1_44
							) - (
								var_1_45
							))
						) , (
							var_1_46
						)
					))
				)
			))
		);
	}


	// From: CodeObject6
	/* 329L, 224L) */ if (/* 330L, 169L, 170L) */ ((-128) != (/* 332L, 168L, 172L) */ (~ (/* 333L, 167L, 173L) */ ((var_1_44) | (var_1_32))))))) {
		/* 336L, 187L) */ var_1_47 = (
			/* 339L, 186L) */ (min (
				/* 339L, 186L) */ (
					var_1_34
				) , (
					var_1_35
				)
			))
		);
	} else {
		/* 342L, 222L) */ if (/* 343L, 192L, 193L) */ ((/* 344L, 190L, 194L) */ ((var_1_8) % (var_1_44))) == (var_1_8))) {
			/* 348L, 220L) */ if (/* 349L, 206L, 207L) */ ((var_1_39) > (/* 351L, 205L, 209L) */ (~ (var_1_40))))) {
				/* 353L, 219L) */ var_1_47 = (
					/* 356L, 218L) */ (abs (
						var_1_35
					))
				);
			}
		}
	}


	// From: CodeObject7
	/* 359L, 233L) */ var_1_48 = (
		var_1_49
	);


	// From: CodeObject8
	/* 364L, 241L) */ var_1_50 = (
		var_1_36
	);


	// From: Req1Batch163Filler_PS_CO
	/* 921L, 31L, 307L, 328L) */ if (/* 922L, 6L, 7L, 308L, 329L) */ ((/* 923L, 4L, 8L, 309L, 330L) */ ((var_1_2) / (31.4))) <= (var_1_3))) {
		/* 927L, 26L, 313L, 334L) */ var_1_1 = (
			/* 930L, 25L, 316L, 337L) */ ((
				/* 931L, 23L, 317L, 338L) */ (min (
					/* 931L, 23L, 317L, 338L) */ (
						/* 932L, 21L, 318L, 339L) */ ((
							var_1_4
						) + (
							var_1_5
						))
					) , (
						var_1_6
					)
				))
			) + (
				var_1_7
			))
		);
	} else {
		/* 937L, 30L, 323L, 344L) */ var_1_1 = (
			var_1_6
		);
	}


	// From: Req5Batch163Filler_PS_CO
	/* 1032L, 251L, 755L, 776L) */ if (/* 1033L, 223L, 224L, 756L, 777L) */ ((var_1_9) || (var_1_23))) {
		/* 1036L, 235L, 759L, 780L) */ var_1_22 = (
			/* 1039L, 234L, 762L, 783L) */ (min (
				/* 1039L, 234L, 762L, 783L) */ (
					var_1_24
				) , (
					var_1_25
				)
			))
		);
	} else {
		/* 1042L, 249L, 765L, 786L) */ if (/* 1043L, 238L, 239L, 766L, 787L) */ ((var_1_4) == (var_1_17))) {
			/* 1046L, 248L, 769L, 790L) */ var_1_22 = (
				16.25f
			);
		}
	}


	// From: Req6Batch163Filler_PS_CO
	signed long int stepLocal_2 = /* 1052L, 266L, 274L, 839L, 860L) */ ((/* 1053L, 264L, 275L, 840L, 861L) */ (max (/* 1053L, 264L, 275L, 840L, 861L) */ (var_1_21) , (var_1_19)))) - (var_1_20));
	/* 1072L, 303L, 837L, 858L) */ if (/* 1063L, 272L, 273L, 838L, 859L) */ ((stepLocal_2) > (/* 1062L, 271L, 279L, 844L, 865L) */ ((256) << (/* 1061L, 270L, 281L, 846L, 867L) */ ((2u) + (var_1_27))))))) {
		/* 1067L, 298L, 849L, 870L) */ var_1_26 = (
			1
		);
	} else {
		/* 1071L, 302L, 853L, 874L) */ var_1_26 = (
			var_1_28
		);
	}


	// From: Req2Batch163Filler_PS_CO
	signed long int stepLocal_0 = var_1_7;
	/* 963L, 65L, 391L, 412L) */ if (/* 946L, 39L, 40L, 392L, 413L) */ ((var_1_1) > (stepLocal_0))) {
		/* 962L, 63L, 395L, 416L) */ if (var_1_26) {
			/* 957L, 58L, 397L, 418L) */ var_1_8 = (
				/* 956L, 57L, 400L, 421L) */ (min (
					/* 956L, 57L, 400L, 421L) */ (
						/* 952L, 53L, 401L, 422L) */ (max (
							/* 952L, 53L, 401L, 422L) */ (
								var_1_10
							) , (
								var_1_11
							)
						))
					) , (
						/* 955L, 56L, 404L, 425L) */ ((
							var_1_12
						) - (
							64u
						))
					)
				))
			);
		} else {
			/* 961L, 62L, 407L, 428L) */ var_1_8 = (
				var_1_11
			);
		}
	}


	// From: Req3Batch163Filler_PS_CO
	/* 968L, 135L, 476L, 502L) */ if (/* 969L, 75L, 76L, 477L, 503L) */ ((var_1_26) && (/* 971L, 74L, 78L, 479L, 505L) */ ((var_1_11) >= (var_1_8))))) {
		/* 974L, 129L, 482L, 508L) */ if (/* 975L, 90L, 91L, 483L, 509L) */ ((var_1_2) < (/* 977L, 89L, 93L, 485L, 511L) */ (max (/* 977L, 89L, 93L, 485L, 511L) */ (var_1_14) , (var_1_3)))))) {
			/* 980L, 104L, 488L, 514L) */ var_1_13 = (
				var_1_15
			);
		} else {
			/* 984L, 128L, 492L, 518L) */ var_1_13 = (
				10
			);
		}
	} else {
		/* 988L, 134L, 496L, 522L) */ var_1_13 = (
			var_1_15
		);
	}


	// From: Req4Batch163Filler_PS_CO
	signed long int stepLocal_1 = var_1_1;
	/* 1026L, 215L, 579L, 612L) */ if (/* 1001L, 149L, 150L, 580L, 613L) */ ((stepLocal_1) < (/* 1000L, 148L, 152L, 582L, 615L) */ ((16) - (/* 999L, 147L, 154L, 584L, 617L) */ ((var_1_17) - (var_1_13))))))) {
		/* 1021L, 209L, 587L, 620L) */ if (/* 1004L, 175L, 176L, 588L, 621L) */ ((1.000000000005E11) >= (var_1_14))) {
			/* 1010L, 187L, 591L, 624L) */ var_1_16 = (
				/* 1009L, 186L, 594L, 627L) */ ((
					var_1_21
				) - (
					10
				))
			);
		} else {
			/* 1020L, 207L, 597L, 630L) */ if (var_1_26) {
				/* 1015L, 194L, 599L, 632L) */ var_1_16 = (
					var_1_21
				);
			} else {
				/* 1019L, 206L, 603L, 636L) */ var_1_16 = (
					-16
				);
			}
		}
	} else {
		/* 1025L, 214L, 607L, 640L) */ var_1_16 = (
			var_1_21
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -536870911);
	assume_abort_if_not(var_1_4 <= 536870912);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -536870911);
	assume_abort_if_not(var_1_5 <= 536870911);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1073741823);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -1073741823);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967294);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 2147483647);
	assume_abort_if_not(var_1_12 <= 4294967294);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 1073741823);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= -1);
	assume_abort_if_not(var_1_21 <= 32766);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 11);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483648);
	assume_abort_if_not(var_1_38 <= 2147483647);
	assume_abort_if_not(var_1_38 != 0);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= 1073741823);
	assume_abort_if_not(var_1_42 <= 2147483647);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 254);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 127);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 254);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 369L, 6L, 12L, 350L, 371L, 1077L) */ ((/* 370L, 4L, 13L, 351L, 372L, 1078L) */ ((var_1_2) / (31.4))) <= (var_1_3))) {
	} else {
	}
	if (/* 390L, 39L, 43L, 434L, 455L, 1098L) */ ((var_1_1) > (var_1_7))) {
		if (var_1_26) {
		} else {
		}
	}
	if (/* 412L, 75L, 81L, 529L, 555L, 1120L) */ ((var_1_26) && (/* 414L, 74L, 83L, 531L, 557L, 1122L) */ ((var_1_11) >= (var_1_8))))) {
		if (/* 418L, 90L, 96L, 535L, 561L, 1126L) */ ((var_1_2) < (/* 420L, 89L, 98L, 537L, 563L, 1128L) */ (max (/* 420L, 89L, 98L, 537L, 563L, 1128L) */ (var_1_14) , (var_1_3)))))) {
		} else {
		}
	} else {
	}
	if (/* 437L, 149L, 157L, 646L, 679L, 1145L) */ ((var_1_1) < (/* 439L, 148L, 159L, 648L, 681L, 1147L) */ ((16) - (/* 441L, 147L, 161L, 650L, 683L, 1149L) */ ((var_1_17) - (var_1_13))))))) {
		if (/* 445L, 175L, 179L, 654L, 687L, 1153L) */ ((1.000000000005E11) >= (var_1_14))) {
		} else {
			if (var_1_26) {
			} else {
			}
		}
	} else {
	}
	if (/* 472L, 223L, 227L, 798L, 819L, 1180L) */ ((var_1_9) || (var_1_23))) {
	} else {
		if (/* 482L, 238L, 242L, 808L, 829L, 1190L) */ ((var_1_4) == (var_1_17))) {
		}
	}
	if (/* 491L, 272L, 284L, 880L, 901L, 1199L) */ ((/* 492L, 266L, 285L, 881L, 902L, 1200L) */ ((/* 493L, 264L, 286L, 882L, 903L, 1201L) */ (max (/* 493L, 264L, 286L, 882L, 903L, 1201L) */ (var_1_21) , (var_1_19)))) - (var_1_20))) > (/* 497L, 271L, 290L, 886L, 907L, 1205L) */ ((256) << (/* 499L, 270L, 292L, 888L, 909L, 1207L) */ ((2u) + (var_1_27))))))) {
	} else {
	}
	return /* 515L) */ ((
	/* 514L) */ ((
		/* 513L) */ ((
			/* 512L) */ ((
				/* 511L) */ ((
					/* 368L, 32L, 349L, 370L, 1076L) */ ((
						/* 369L, 6L, 12L, 350L, 371L, 1077L) */ ((
							/* 370L, 4L, 13L, 351L, 372L, 1078L) */ ((
								var_1_2
							) / (
								31.4
							))
						) <= (
							var_1_3
						))
					) ? (
						/* 374L, 26L, 355L, 376L, 1082L) */ ((
							var_1_1
						) == (
							/* 374L, 26L, 355L, 376L, 1082L) */ ((signed long int) (
								/* 377L, 25L, 358L, 379L, 1085L) */ ((
									/* 378L, 23L, 359L, 380L, 1086L) */ (min (
										/* 378L, 23L, 359L, 380L, 1086L) */ (
											/* 379L, 21L, 360L, 381L, 1087L) */ ((
												var_1_4
											) + (
												var_1_5
											))
										) , (
											var_1_6
										)
									))
								) + (
									var_1_7
								))
							))
						))
					) : (
						/* 384L, 30L, 365L, 386L, 1092L) */ ((
							var_1_1
						) == (
							/* 384L, 30L, 365L, 386L, 1092L) */ ((signed long int) (
								var_1_6
							))
						))
					))
				) && (
					/* 389L, 66L, 433L, 454L, 1097L) */ ((
						/* 390L, 39L, 43L, 434L, 455L, 1098L) */ ((
							var_1_1
						) > (
							var_1_7
						))
					) ? (
						/* 393L, 64L, 437L, 458L, 1101L) */ ((
							var_1_26
						) ? (
							/* 395L, 58L, 439L, 460L, 1103L) */ ((
								var_1_8
							) == (
								/* 395L, 58L, 439L, 460L, 1103L) */ ((unsigned long int) (
									/* 398L, 57L, 442L, 463L, 1106L) */ (min (
										/* 398L, 57L, 442L, 463L, 1106L) */ (
											/* 399L, 53L, 443L, 464L, 1107L) */ (max (
												/* 399L, 53L, 443L, 464L, 1107L) */ (
													var_1_10
												) , (
													var_1_11
												)
											))
										) , (
											/* 402L, 56L, 446L, 467L, 1110L) */ ((
												var_1_12
											) - (
												64u
											))
										)
									))
								))
							))
						) : (
							/* 405L, 62L, 449L, 470L, 1113L) */ ((
								var_1_8
							) == (
								/* 405L, 62L, 449L, 470L, 1113L) */ ((unsigned long int) (
									var_1_11
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 411L, 136L, 528L, 554L, 1119L) */ ((
					/* 412L, 75L, 81L, 529L, 555L, 1120L) */ ((
						var_1_26
					) && (
						/* 414L, 74L, 83L, 531L, 557L, 1122L) */ ((
							var_1_11
						) >= (
							var_1_8
						))
					))
				) ? (
					/* 417L, 130L, 534L, 560L, 1125L) */ ((
						/* 418L, 90L, 96L, 535L, 561L, 1126L) */ ((
							var_1_2
						) < (
							/* 420L, 89L, 98L, 537L, 563L, 1128L) */ (max (
								/* 420L, 89L, 98L, 537L, 563L, 1128L) */ (
									var_1_14
								) , (
									var_1_3
								)
							))
						))
					) ? (
						/* 423L, 104L, 540L, 566L, 1131L) */ ((
							var_1_13
						) == (
							/* 423L, 104L, 540L, 566L, 1131L) */ ((unsigned short int) (
								var_1_15
							))
						))
					) : (
						/* 427L, 128L, 544L, 570L, 1135L) */ ((
							var_1_13
						) == (
							/* 427L, 128L, 544L, 570L, 1135L) */ ((unsigned short int) (
								10
							))
						))
					))
				) : (
					/* 431L, 134L, 548L, 574L, 1139L) */ ((
						var_1_13
					) == (
						/* 431L, 134L, 548L, 574L, 1139L) */ ((unsigned short int) (
							var_1_15
						))
					))
				))
			))
		) && (
			/* 436L, 216L, 645L, 678L, 1144L) */ ((
				/* 437L, 149L, 157L, 646L, 679L, 1145L) */ ((
					var_1_1
				) < (
					/* 439L, 148L, 159L, 648L, 681L, 1147L) */ ((
						16
					) - (
						/* 441L, 147L, 161L, 650L, 683L, 1149L) */ ((
							var_1_17
						) - (
							var_1_13
						))
					))
				))
			) ? (
				/* 444L, 210L, 653L, 686L, 1152L) */ ((
					/* 445L, 175L, 179L, 654L, 687L, 1153L) */ ((
						1.000000000005E11
					) >= (
						var_1_14
					))
				) ? (
					/* 448L, 187L, 657L, 690L, 1156L) */ ((
						var_1_16
					) == (
						/* 448L, 187L, 657L, 690L, 1156L) */ ((signed short int) (
							/* 451L, 186L, 660L, 693L, 1159L) */ ((
								var_1_21
							) - (
								10
							))
						))
					))
				) : (
					/* 454L, 208L, 663L, 696L, 1162L) */ ((
						var_1_26
					) ? (
						/* 456L, 194L, 665L, 698L, 1164L) */ ((
							var_1_16
						) == (
							/* 456L, 194L, 665L, 698L, 1164L) */ ((signed short int) (
								var_1_21
							))
						))
					) : (
						/* 460L, 206L, 669L, 702L, 1168L) */ ((
							var_1_16
						) == (
							/* 460L, 206L, 669L, 702L, 1168L) */ ((signed short int) (
								-16
							))
						))
					))
				))
			) : (
				/* 464L, 214L, 673L, 706L, 1172L) */ ((
					var_1_16
				) == (
					/* 464L, 214L, 673L, 706L, 1172L) */ ((signed short int) (
						var_1_21
					))
				))
			))
		))
	) && (
		/* 471L, 252L, 797L, 818L, 1179L) */ ((
			/* 472L, 223L, 227L, 798L, 819L, 1180L) */ ((
				var_1_9
			) || (
				var_1_23
			))
		) ? (
			/* 475L, 235L, 801L, 822L, 1183L) */ ((
				var_1_22
			) == (
				/* 475L, 235L, 801L, 822L, 1183L) */ ((float) (
					/* 478L, 234L, 804L, 825L, 1186L) */ (min (
						/* 478L, 234L, 804L, 825L, 1186L) */ (
							var_1_24
						) , (
							var_1_25
						)
					))
				))
			))
		) : (
			/* 481L, 250L, 807L, 828L, 1189L) */ ((
				/* 482L, 238L, 242L, 808L, 829L, 1190L) */ ((
					var_1_4
				) == (
					var_1_17
				))
			) ? (
				/* 485L, 248L, 811L, 832L, 1193L) */ ((
					var_1_22
				) == (
					/* 485L, 248L, 811L, 832L, 1193L) */ ((float) (
						16.25f
					))
				))
			) : (
				1
			))
		))
	))
) && (
	/* 490L, 304L, 879L, 900L, 1198L) */ ((
		/* 491L, 272L, 284L, 880L, 901L, 1199L) */ ((
			/* 492L, 266L, 285L, 881L, 902L, 1200L) */ ((
				/* 493L, 264L, 286L, 882L, 903L, 1201L) */ (max (
					/* 493L, 264L, 286L, 882L, 903L, 1201L) */ (
						var_1_21
					) , (
						var_1_19
					)
				))
			) - (
				var_1_20
			))
		) > (
			/* 497L, 271L, 290L, 886L, 907L, 1205L) */ ((
				256
			) << (
				/* 499L, 270L, 292L, 888L, 909L, 1207L) */ ((
					2u
				) + (
					var_1_27
				))
			))
		))
	) ? (
		/* 502L, 298L, 891L, 912L, 1210L) */ ((
			var_1_26
		) == (
			/* 502L, 298L, 891L, 912L, 1210L) */ ((unsigned char) (
				1
			))
		))
	) : (
		/* 506L, 302L, 895L, 916L, 1214L) */ ((
			var_1_26
		) == (
			/* 506L, 302L, 895L, 916L, 1214L) */ ((unsigned char) (
				var_1_28
			))
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
