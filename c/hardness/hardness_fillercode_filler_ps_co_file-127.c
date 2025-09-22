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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch127Filler_PS_CO.c", 13, "reach_error"); }
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
signed long int var_1_1 = 50;
signed long int var_1_4 = 16;
signed long int var_1_5 = 100000;
unsigned char var_1_6 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned short int var_1_13 = 10;
unsigned short int var_1_14 = 36108;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 25;
unsigned short int var_1_17 = 64;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 1;
float var_1_20 = 99999.65;
float var_1_21 = 0.6;
signed char var_1_22 = -4;
signed char var_1_23 = 1;
float var_1_24 = -0.7;
signed char var_1_25 = 64;
signed char var_1_27 = 50;
signed char var_1_28 = 16;
signed char var_1_29 = 16;
float var_1_31 = 128.875;
float var_1_32 = 0.19999999999999996;
float var_1_33 = 256.18;
float var_1_34 = 25.2;
float var_1_35 = 5.5;
float var_1_36 = 0.35;
signed char var_1_37 = 64;
signed long int var_1_38 = -10000000;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 50;
unsigned char last_1_var_1_11 = 0;
unsigned char last_1_var_1_12 = 1;
unsigned short int last_1_var_1_13 = 10;
unsigned short int last_1_var_1_17 = 64;
unsigned char last_1_var_1_18 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 419L, 203L) */ var_1_20 = (
		var_1_21
	);


	// From: CodeObject2
	/* 424L, 211L) */ var_1_22 = (
		var_1_23
	);


	// From: CodeObject3
	/* 429L, 219L) */ var_1_24 = (
		var_1_21
	);


	// From: CodeObject4
	/* 433L, 283L) */ if (/* 434L, 227L, 228L) */ ((-200) <= (/* 436L, 226L, 230L) */ (~ (var_1_23))))) {
		/* 438L, 281L) */ if (var_1_6) {
			/* 440L, 262L) */ if (/* 441L, 242L, 243L) */ (! (/* 442L, 241L, 244L) */ ((var_1_23) <= (var_1_18))))) {
				/* 445L, 261L) */ var_1_25 = (
					/* 448L, 260L) */ ((
						/* 449L, 257L) */ ((
							/* 450L, 255L) */ ((
								var_1_27
							) - (
								var_1_28
							))
						) - (
							2
						))
					) + (
						/* 454L, 259L) */ (abs (
							var_1_29
						))
					))
				);
			}
		} else {
			/* 456L, 279L) */ if (var_1_6) {
				/* 458L, 271L) */ var_1_25 = (
					/* 461L, 270L) */ (abs (
						var_1_27
					))
				);
			} else {
				/* 463L, 278L) */ var_1_25 = (
					/* 466L, 277L) */ (max (
						/* 466L, 277L) */ (
							/* 467L, 275L) */ (abs (
								var_1_27
							))
						) , (
							var_1_29
						)
					))
				);
			}
		}
	}


	// From: CodeObject5
	/* 471L, 302L) */ if (/* 472L, 289L, 290L) */ ((var_1_27) >= (var_1_13))) {
		/* 475L, 301L) */ var_1_31 = (
			/* 478L, 300L) */ ((
				var_1_32
			) - (
				var_1_33
			))
		);
	}


	// From: CodeObject6
	/* 481L, 400L) */ if (/* 482L, 315L, 316L) */ ((var_1_15) < (/* 484L, 314L, 318L) */ (min (/* 484L, 314L, 318L) */ (var_1_13) , (/* 486L, 313L, 320L) */ ((var_1_29) % (-5)))))))) {
		/* 489L, 335L) */ var_1_34 = (
			/* 492L, 334L) */ (max (
				/* 492L, 334L) */ (
					1.25f
				) , (
					var_1_35
				)
			))
		);
	} else {
		/* 495L, 398L) */ if (var_1_6) {
			/* 497L, 343L) */ var_1_34 = (
				/* 500L, 342L) */ (abs (
					var_1_35
				))
			);
		} else {
			/* 502L, 396L) */ if (/* 503L, 348L, 349L) */ ((var_1_29) < (/* 505L, 347L, 351L) */ ((var_1_23) & (var_1_27))))) {
				/* 508L, 366L) */ var_1_34 = (
					/* 511L, 365L) */ ((
						/* 512L, 363L) */ (max (
							/* 512L, 363L) */ (
								var_1_32
							) , (
								var_1_33
							)
						))
					) - (
						var_1_36
					))
				);
			} else {
				/* 516L, 394L) */ if (/* 517L, 372L, 373L) */ ((/* 518L, 370L, 374L) */ (abs (/* 519L, 369L, 375L) */ (max (/* 519L, 369L, 375L) */ (var_1_15) , (var_1_27)))))) < (-4))) {
					/* 523L, 393L) */ var_1_34 = (
						/* 526L, 392L) */ (max (
							/* 526L, 392L) */ (
								var_1_36
							) , (
								/* 528L, 391L) */ (min (
									/* 528L, 391L) */ (
										/* 529L, 389L) */ (abs (
											var_1_21
										))
									) , (
										var_1_35
									)
								))
							)
						))
					);
				}
			}
		}
	}


	// From: CodeObject7
	/* 533L, 407L) */ var_1_37 = (
		var_1_29
	);


	// From: CodeObject8
	/* 538L, 415L) */ var_1_38 = (
		16
	);


	// From: Req8Batch127Filler_PS_CO
	unsigned char stepLocal_2 = last_1_var_1_11;
	signed long int stepLocal_1 = /* 141L, 283L, 287L, 871L, 896L, 1105L, 1294L) */ (max (/* 141L, 283L, 287L, 871L, 896L, 1105L, 1294L) */ (last_1_var_1_17) , (/* 140L, 282L, 289L, 873L, 898L, 1104L, 1297L) */ ((var_1_4) * (last_1_var_1_1)))));
	/* 165L, 327L, 869L, 894L, 1127L, 1325L) */ if (/* 147L, 285L, 286L, 870L, 895L, 1108L, 1308L) */ ((stepLocal_1) != (last_1_var_1_17))) {
		/* 151L, 303L, 877L, 902L, 1112L, 1312L) */ var_1_18 = (
			var_1_19
		);
	} else {
		/* 164L, 325L, 881L, 906L, 1126L, 1324L) */ if (/* 155L, 306L, 307L, 882L, 907L, 1117L, 1315L) */ ((stepLocal_2) || (last_1_var_1_12))) {
			/* 159L, 316L, 885L, 910L, 1121L, 1319L) */ var_1_18 = (
				var_1_19
			);
		} else {
			/* 163L, 324L, 889L, 914L, 1125L, 1323L) */ var_1_18 = (
				var_1_16
			);
		}
	}


	// From: Req5Batch127Filler_PS_CO
	/* 114L, 201L, 646L, 656L, 1083L, 1247L) */ var_1_13 = (
		/* 113L, 200L, 649L, 659L, 1082L, 1250L) */ ((
			var_1_14
		) - (
			last_1_var_1_18
		))
	);


	// From: Req2Batch127Filler_PS_CO
	/* 82L, 143L, 440L, 460L, 1051L, 1191L) */ if (/* 68L, 120L, 121L, 441L, 461L, 1037L, 1192L) */ ((/* 65L, 118L, 122L, 442L, 462L, 1034L, 1193L) */ ((last_1_var_1_1) * (-8))) > (last_1_var_1_1))) {
		/* 77L, 138L, 446L, 466L, 1046L, 1199L) */ var_1_6 = (
			/* 76L, 137L, 449L, 469L, 1045L, 1202L) */ ((
				var_1_8
			) || (
				/* 75L, 136L, 451L, 471L, 1044L, 1204L) */ ((
					last_1_var_1_12
				) && (
					var_1_9
				))
			))
		);
	} else {
		/* 81L, 142L, 454L, 474L, 1050L, 1208L) */ var_1_6 = (
			var_1_10
		);
	}


	// From: Req3Batch127Filler_PS_CO
	/* 1215L, 162L, 521L, 534L) */ if (var_1_10) {
		/* 1217L, 161L, 523L, 536L) */ var_1_11 = (
			/* 1220L, 160L, 526L, 539L) */ ((
				var_1_6
			) && (
				/* 1222L, 159L, 528L, 541L) */ ((
					var_1_8
				) && (
					var_1_9
				))
			))
		);
	}


	// From: Req1Batch127Filler_PS_CO
	/* 26L, 103L, 334L, 361L, 995L, 1162L) */ if (/* 2L, 3L, 4L, 335L, 362L, 971L, 1163L) */ (! (last_1_var_1_12))) {
		/* 20L, 97L, 337L, 364L, 989L, 1166L) */ if (/* 10L, 14L, 15L, 338L, 365L, 979L, 1167L) */ ((/* 6L, 10L, 16L, 339L, 366L, 975L, 1168L) */ ((4) + (last_1_var_1_13))) >= (/* 9L, 13L, 19L, 342L, 369L, 978L, 1172L) */ (min (/* 9L, 13L, 19L, 342L, 369L, 978L, 1172L) */ (var_1_4) , (var_1_5)))))) {
			/* 15L, 32L, 345L, 372L, 984L, 1175L) */ var_1_1 = (
				last_1_var_1_13
			);
		} else {
			/* 19L, 96L, 349L, 376L, 988L, 1180L) */ var_1_1 = (
				-128
			);
		}
	} else {
		/* 25L, 102L, 353L, 380L, 994L, 1184L) */ var_1_1 = (
			last_1_var_1_13
		);
	}


	// From: Req7Batch127Filler_PS_CO
	signed long int stepLocal_0 = /* 1265L, 236L, 244L, 728L, 753L) */ (max (/* 1265L, 236L, 244L, 728L, 753L) */ (var_1_13) , (var_1_1)));
	/* 1289L, 270L, 719L, 744L) */ if (var_1_6) {
		/* 1288L, 268L, 721L, 746L) */ if (/* 1275L, 237L, 238L, 722L, 747L) */ ((/* 1274L, 233L, 239L, 723L, 748L) */ (max (/* 1274L, 233L, 239L, 723L, 748L) */ (var_1_13) , (/* 1273L, 232L, 241L, 725L, 750L) */ ((var_1_1) * (var_1_14)))))) <= (stepLocal_0))) {
			/* 1281L, 261L, 731L, 756L) */ var_1_17 = (
				/* 1280L, 260L, 734L, 759L) */ ((
					var_1_13
				) + (
					var_1_18
				))
			);
		} else {
			/* 1287L, 267L, 737L, 762L) */ var_1_17 = (
				/* 1286L, 266L, 740L, 765L) */ (min (
					/* 1286L, 266L, 740L, 765L) */ (
						var_1_18
					) , (
						var_1_13
					)
				))
			);
		}
	}


	// From: Req4Batch127Filler_PS_CO
	/* 1226L, 190L, 571L, 589L) */ if (var_1_6) {
		/* 1228L, 179L, 573L, 591L) */ var_1_12 = (
			/* 1231L, 178L, 576L, 594L) */ (! (
				var_1_8
			))
		);
	} else {
		/* 1233L, 189L, 578L, 596L) */ var_1_12 = (
			/* 1236L, 188L, 581L, 599L) */ ((
				var_1_11
			) && (
				/* 1238L, 187L, 583L, 601L) */ ((
					/* 1239L, 185L, 584L, 602L) */ ((
						var_1_13
					) <= (
						var_1_1
					))
				) && (
					var_1_9
				))
			))
		);
	}


	// From: Req6Batch127Filler_PS_CO
	/* 1256L, 220L, 684L, 693L) */ if (var_1_12) {
		/* 1258L, 219L, 686L, 695L) */ var_1_15 = (
			/* 1261L, 218L, 689L, 698L) */ (abs (
				var_1_16
			))
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 31);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 31);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -63);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (/* 546L, 3L, 6L, 389L, 416L, 1002L, 1334L, 33L) */ (! (last_1_var_1_12))) {
		if (/* 550L, 14L, 22L, 392L, 419L, 1010L, 1338L, 41L) */ ((/* 551L, 10L, 23L, 393L, 420L, 1006L, 1339L, 37L) */ ((4) + (last_1_var_1_13))) >= (/* 555L, 13L, 26L, 396L, 423L, 1009L, 1343L, 40L) */ (min (/* 555L, 13L, 26L, 396L, 423L, 1009L, 1343L, 40L) */ (var_1_4) , (var_1_5)))))) {
		} else {
		}
	} else {
	}
	if (/* 575L, 120L, 126L, 481L, 501L, 1060L, 1363L, 91L) */ ((/* 576L, 118L, 127L, 482L, 502L, 1057L, 1364L, 88L) */ ((last_1_var_1_1) * (-8))) > (last_1_var_1_1))) {
	} else {
	}
	if (var_1_10) {
	}
	if (var_1_6) {
	} else {
	}
	if (var_1_12) {
	}
	if (var_1_6) {
		if (/* 650L, 237L, 247L, 772L, 797L, 1438L) */ ((/* 651L, 233L, 248L, 773L, 798L, 1439L) */ (max (/* 651L, 233L, 248L, 773L, 798L, 1439L) */ (var_1_13) , (/* 653L, 232L, 250L, 775L, 800L, 1441L) */ ((var_1_1) * (var_1_14)))))) <= (/* 656L, 236L, 253L, 778L, 803L, 1444L) */ (max (/* 656L, 236L, 253L, 778L, 803L, 1444L) */ (var_1_13) , (var_1_1)))))) {
		} else {
		}
	}
	if (/* 673L, 285L, 293L, 920L, 945L, 1138L, 1461L, 177L) */ ((/* 674L, 283L, 294L, 921L, 946L, 1135L, 1462L, 174L) */ (max (/* 674L, 283L, 294L, 921L, 946L, 1135L, 1462L, 174L) */ (last_1_var_1_17) , (/* 677L, 282L, 296L, 923L, 948L, 1134L, 1465L, 173L) */ ((var_1_4) * (last_1_var_1_1)))))) != (last_1_var_1_17))) {
	} else {
		if (/* 688L, 306L, 310L, 932L, 957L, 1147L, 1476L, 186L) */ ((last_1_var_1_11) || (last_1_var_1_12))) {
		} else {
		}
	}
	return /* 708L) */ ((
	/* 707L) */ ((
		/* 706L) */ ((
			/* 705L) */ ((
				/* 704L) */ ((
					/* 703L) */ ((
						/* 702L) */ ((
							/* 545L, 104L, 388L, 415L, 1026L, 1333L, 57L) */ ((
								/* 546L, 3L, 6L, 389L, 416L, 1002L, 1334L, 33L) */ (! (
									last_1_var_1_12
								))
							) ? (
								/* 549L, 98L, 391L, 418L, 1020L, 1337L, 51L) */ ((
									/* 550L, 14L, 22L, 392L, 419L, 1010L, 1338L, 41L) */ ((
										/* 551L, 10L, 23L, 393L, 420L, 1006L, 1339L, 37L) */ ((
											4
										) + (
											last_1_var_1_13
										))
									) >= (
										/* 555L, 13L, 26L, 396L, 423L, 1009L, 1343L, 40L) */ (min (
											/* 555L, 13L, 26L, 396L, 423L, 1009L, 1343L, 40L) */ (
												var_1_4
											) , (
												var_1_5
											)
										))
									))
								) ? (
									/* 558L, 32L, 399L, 426L, 1015L, 1346L, 46L) */ ((
										var_1_1
									) == (
										/* 558L, 32L, 399L, 426L, 1015L, 1346L, 46L) */ ((signed long int) (
											last_1_var_1_13
										))
									))
								) : (
									/* 563L, 96L, 403L, 430L, 1019L, 1351L, 50L) */ ((
										var_1_1
									) == (
										/* 563L, 96L, 403L, 430L, 1019L, 1351L, 50L) */ ((signed long int) (
											-128
										))
									))
								))
							) : (
								/* 567L, 102L, 407L, 434L, 1025L, 1355L, 56L) */ ((
									var_1_1
								) == (
									/* 567L, 102L, 407L, 434L, 1025L, 1355L, 56L) */ ((signed long int) (
										last_1_var_1_13
									))
								))
							))
						) && (
							/* 574L, 144L, 480L, 500L, 1074L, 1362L, 105L) */ ((
								/* 575L, 120L, 126L, 481L, 501L, 1060L, 1363L, 91L) */ ((
									/* 576L, 118L, 127L, 482L, 502L, 1057L, 1364L, 88L) */ ((
										last_1_var_1_1
									) * (
										-8
									))
								) > (
									last_1_var_1_1
								))
							) ? (
								/* 582L, 138L, 486L, 506L, 1069L, 1370L, 100L) */ ((
									var_1_6
								) == (
									/* 582L, 138L, 486L, 506L, 1069L, 1370L, 100L) */ ((unsigned char) (
										/* 585L, 137L, 489L, 509L, 1068L, 1373L, 99L) */ ((
											var_1_8
										) || (
											/* 587L, 136L, 491L, 511L, 1067L, 1375L, 98L) */ ((
												last_1_var_1_12
											) && (
												var_1_9
											))
										))
									))
								))
							) : (
								/* 591L, 142L, 494L, 514L, 1073L, 1379L, 104L) */ ((
									var_1_6
								) == (
									/* 591L, 142L, 494L, 514L, 1073L, 1379L, 104L) */ ((unsigned char) (
										var_1_10
									))
								))
							))
						))
					) && (
						/* 598L, 163L, 547L, 560L, 1386L) */ ((
							var_1_10
						) ? (
							/* 600L, 161L, 549L, 562L, 1388L) */ ((
								var_1_11
							) == (
								/* 600L, 161L, 549L, 562L, 1388L) */ ((unsigned char) (
									/* 603L, 160L, 552L, 565L, 1391L) */ ((
										var_1_6
									) && (
										/* 605L, 159L, 554L, 567L, 1393L) */ ((
											var_1_8
										) && (
											var_1_9
										))
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 609L, 191L, 607L, 625L, 1397L) */ ((
						var_1_6
					) ? (
						/* 611L, 179L, 609L, 627L, 1399L) */ ((
							var_1_12
						) == (
							/* 611L, 179L, 609L, 627L, 1399L) */ ((unsigned char) (
								/* 614L, 178L, 612L, 630L, 1402L) */ (! (
									var_1_8
								))
							))
						))
					) : (
						/* 616L, 189L, 614L, 632L, 1404L) */ ((
							var_1_12
						) == (
							/* 616L, 189L, 614L, 632L, 1404L) */ ((unsigned char) (
								/* 619L, 188L, 617L, 635L, 1407L) */ ((
									var_1_11
								) && (
									/* 621L, 187L, 619L, 637L, 1409L) */ ((
										/* 622L, 185L, 620L, 638L, 1410L) */ ((
											var_1_13
										) <= (
											var_1_1
										))
									) && (
										var_1_9
									))
								))
							))
						))
					))
				))
			) && (
				/* 630L, 201L, 666L, 676L, 1094L, 1418L, 125L) */ ((
					var_1_13
				) == (
					/* 630L, 201L, 666L, 676L, 1094L, 1418L, 125L) */ ((unsigned short int) (
						/* 633L, 200L, 669L, 679L, 1093L, 1421L, 124L) */ ((
							var_1_14
						) - (
							last_1_var_1_18
						))
					))
				))
			))
		) && (
			/* 639L, 221L, 702L, 711L, 1427L) */ ((
				var_1_12
			) ? (
				/* 641L, 219L, 704L, 713L, 1429L) */ ((
					var_1_15
				) == (
					/* 641L, 219L, 704L, 713L, 1429L) */ ((unsigned char) (
						/* 644L, 218L, 707L, 716L, 1432L) */ (abs (
							var_1_16
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 647L, 271L, 769L, 794L, 1435L) */ ((
			var_1_6
		) ? (
			/* 649L, 269L, 771L, 796L, 1437L) */ ((
				/* 650L, 237L, 247L, 772L, 797L, 1438L) */ ((
					/* 651L, 233L, 248L, 773L, 798L, 1439L) */ (max (
						/* 651L, 233L, 248L, 773L, 798L, 1439L) */ (
							var_1_13
						) , (
							/* 653L, 232L, 250L, 775L, 800L, 1441L) */ ((
								var_1_1
							) * (
								var_1_14
							))
						)
					))
				) <= (
					/* 656L, 236L, 253L, 778L, 803L, 1444L) */ (max (
						/* 656L, 236L, 253L, 778L, 803L, 1444L) */ (
							var_1_13
						) , (
							var_1_1
						)
					))
				))
			) ? (
				/* 659L, 261L, 781L, 806L, 1447L) */ ((
					var_1_17
				) == (
					/* 659L, 261L, 781L, 806L, 1447L) */ ((unsigned short int) (
						/* 662L, 260L, 784L, 809L, 1450L) */ ((
							var_1_13
						) + (
							var_1_18
						))
					))
				))
			) : (
				/* 665L, 267L, 787L, 812L, 1453L) */ ((
					var_1_17
				) == (
					/* 665L, 267L, 787L, 812L, 1453L) */ ((unsigned short int) (
						/* 668L, 266L, 790L, 815L, 1456L) */ (min (
							/* 668L, 266L, 790L, 815L, 1456L) */ (
								var_1_18
							) , (
								var_1_13
							)
						))
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 672L, 328L, 919L, 944L, 1157L, 1460L, 196L) */ ((
		/* 673L, 285L, 293L, 920L, 945L, 1138L, 1461L, 177L) */ ((
			/* 674L, 283L, 294L, 921L, 946L, 1135L, 1462L, 174L) */ (max (
				/* 674L, 283L, 294L, 921L, 946L, 1135L, 1462L, 174L) */ (
					last_1_var_1_17
				) , (
					/* 677L, 282L, 296L, 923L, 948L, 1134L, 1465L, 173L) */ ((
						var_1_4
					) * (
						last_1_var_1_1
					))
				)
			))
		) != (
			last_1_var_1_17
		))
	) ? (
		/* 683L, 303L, 927L, 952L, 1142L, 1471L, 181L) */ ((
			var_1_18
		) == (
			/* 683L, 303L, 927L, 952L, 1142L, 1471L, 181L) */ ((unsigned char) (
				var_1_19
			))
		))
	) : (
		/* 687L, 326L, 931L, 956L, 1156L, 1475L, 195L) */ ((
			/* 688L, 306L, 310L, 932L, 957L, 1147L, 1476L, 186L) */ ((
				last_1_var_1_11
			) || (
				last_1_var_1_12
			))
		) ? (
			/* 693L, 316L, 935L, 960L, 1151L, 1481L, 190L) */ ((
				var_1_18
			) == (
				/* 693L, 316L, 935L, 960L, 1151L, 1481L, 190L) */ ((unsigned char) (
					var_1_19
				))
			))
		) : (
			/* 697L, 324L, 939L, 964L, 1155L, 1485L, 194L) */ ((
				var_1_18
			) == (
				/* 697L, 324L, 939L, 964L, 1155L, 1485L, 194L) */ ((unsigned char) (
					var_1_16
				))
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
