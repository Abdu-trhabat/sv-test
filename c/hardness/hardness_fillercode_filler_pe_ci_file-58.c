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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch58Filler_PE_CI.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_3 = 16;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed long int var_1_14 = -8;
unsigned long int var_1_15 = 128;
unsigned long int var_1_17 = 5;
unsigned short int var_1_18 = 32;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 1;
unsigned long int var_1_23 = 256;
unsigned long int var_1_24 = 5;
signed char var_1_26 = 10;
signed char var_1_27 = 50;
unsigned long int var_1_28 = 128;
signed short int var_1_29 = 5;
unsigned short int var_1_30 = 4;
float var_1_32 = 32.625;
float var_1_33 = 200.75;
float var_1_34 = -0.25;
signed short int var_1_35 = 32;
signed short int var_1_36 = 128;
unsigned char var_1_37 = 1;
unsigned long int var_1_38 = 128;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
unsigned char last_1_var_1_10 = 0;
signed long int last_1_var_1_14 = -8;
unsigned long int last_1_var_1_17 = 5;
unsigned short int last_1_var_1_18 = 32;
unsigned char last_1_var_1_19 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req7Batch58Filler_PE_CI
	unsigned long int stepLocal_2 = /* 93L, 253L, 257L, 996L, 1011L, 1196L, 1369L) */ ((last_1_var_1_18) + (last_1_var_1_17));
	/* 107L, 280L, 994L, 1009L, 1208L, 1386L) */ if (/* 97L, 255L, 256L, 995L, 1010L, 1198L, 1376L) */ ((stepLocal_2) < (1))) {
		/* 106L, 278L, 1000L, 1015L, 1207L, 1385L) */ if (var_1_12) {
			/* 105L, 276L, 1002L, 1017L, 1206L, 1384L) */ if (last_1_var_1_10) {
				/* 104L, 275L, 1004L, 1019L, 1205L, 1383L) */ var_1_19 = (
					var_1_11
				);
			}
		}
	}


	// From: Req1Batch58Filler_PE_CI
	/* 41L, 86L, 453L, 494L, 1095L, 1229L) */ if (/* 5L, 6L, 7L, 454L, 495L, 1059L, 1230L) */ ((/* 3L, 4L, 8L, 455L, 496L, 1057L, 1231L) */ ((last_1_var_1_17) / (var_1_3))) <= (2))) {
		/* 36L, 80L, 459L, 500L, 1090L, 1236L) */ if (/* 13L, 22L, 23L, 460L, 501L, 1067L, 1237L) */ ((var_1_3) < (/* 12L, 21L, 25L, 462L, 503L, 1066L, 1239L) */ (min (/* 12L, 21L, 25L, 462L, 503L, 1066L, 1239L) */ (/* 9L, 19L, 26L, 463L, 504L, 1063L, 1240L) */ (~ (last_1_var_1_17))) , (last_1_var_1_14)))))) {
			/* 19L, 40L, 466L, 507L, 1073L, 1245L) */ var_1_1 = (
				/* 18L, 39L, 469L, 510L, 1072L, 1248L) */ (min (
					/* 18L, 39L, 469L, 510L, 1072L, 1248L) */ (
						var_1_5
					) , (
						16
					)
				))
			);
		} else {
			/* 35L, 78L, 472L, 513L, 1089L, 1251L) */ if (/* 26L, 47L, 48L, 473L, 514L, 1080L, 1252L) */ ((/* 24L, 45L, 49L, 474L, 515L, 1078L, 1253L) */ ((/* 22L, 43L, 50L, 475L, 516L, 1076L, 1254L) */ ((var_1_6) || (var_1_7))) && (var_1_8))) || (var_1_9))) {
				/* 30L, 65L, 480L, 521L, 1084L, 1259L) */ var_1_1 = (
					var_1_5
				);
			} else {
				/* 34L, 77L, 484L, 525L, 1088L, 1263L) */ var_1_1 = (
					32
				);
			}
		}
	} else {
		/* 40L, 85L, 488L, 529L, 1094L, 1267L) */ var_1_1 = (
			var_1_5
		);
	}


	// From: Req3Batch58Filler_PE_CI
	unsigned char stepLocal_0 = var_1_5;
	/* 1315L, 150L, 742L, 760L) */ if (/* 1301L, 131L, 132L, 743L, 761L) */ ((stepLocal_0) >= (var_1_3))) {
		/* 1308L, 143L, 746L, 764L) */ var_1_14 = (
			/* 1307L, 142L, 749L, 767L) */ (min (
				/* 1307L, 142L, 749L, 767L) */ (
					last_1_var_1_14
				) , (
					var_1_1
				)
			))
		);
	} else {
		/* 1314L, 149L, 753L, 771L) */ var_1_14 = (
			/* 1313L, 148L, 756L, 774L) */ ((
				32
			) + (
				var_1_1
			))
		);
	}


	// From: Req6Batch58Filler_PE_CI
	/* 1363L, 240L, 965L, 973L) */ var_1_18 = (
		var_1_1
	);


	// From: Req2Batch58Filler_PE_CI
	/* 1274L, 119L, 618L, 641L, 1163L) */ if (/* 1275L, 96L, 97L, 619L, 642L, 1145L) */ ((last_1_var_1_1) <= (var_1_5))) {
		/* 1279L, 112L, 622L, 645L, 1156L) */ var_1_10 = (
			/* 1282L, 111L, 625L, 648L, 1155L) */ ((
				last_1_var_1_19
			) || (
				/* 1285L, 110L, 627L, 650L, 1154L) */ ((
					/* 1286L, 108L, 628L, 651L, 1152L) */ ((
						var_1_3
					) != (
						var_1_5
					))
				) || (
					var_1_11
				))
			))
		);
	} else {
		/* 1290L, 118L, 632L, 655L, 1162L) */ var_1_10 = (
			/* 1293L, 117L, 635L, 658L, 1161L) */ ((
				var_1_12
			) || (
				var_1_13
			))
		);
	}


	// From: Req5Batch58Filler_PE_CI
	/* 1345L, 229L, 899L, 915L) */ if (/* 1346L, 203L, 204L, 900L, 916L) */ ((var_1_14) < (/* 1348L, 202L, 206L, 902L, 918L) */ ((32) / (var_1_3))))) {
		/* 1351L, 227L, 905L, 921L) */ if (/* 1352L, 216L, 217L, 906L, 922L) */ ((var_1_10) || (var_1_19))) {
			/* 1355L, 226L, 909L, 925L) */ var_1_17 = (
				var_1_18
			);
		}
	}


	// From: Req4Batch58Filler_PE_CI
	unsigned char stepLocal_1 = var_1_10;
	/* 1340L, 193L, 814L, 835L) */ if (/* 1329L, 164L, 165L, 815L, 836L) */ ((stepLocal_1) || (/* 1328L, 163L, 167L, 817L, 838L) */ ((/* 1324L, 159L, 168L, 818L, 839L) */ (max (/* 1324L, 159L, 168L, 818L, 839L) */ (var_1_14) , (var_1_3)))) < (/* 1327L, 162L, 171L, 821L, 842L) */ (min (/* 1327L, 162L, 171L, 821L, 842L) */ (var_1_17) , (var_1_18)))))))) {
		/* 1335L, 188L, 824L, 845L) */ var_1_15 = (
			/* 1334L, 187L, 827L, 848L) */ (max (
				/* 1334L, 187L, 827L, 848L) */ (
					1u
				) , (
					var_1_17
				)
			))
		);
	} else {
		/* 1339L, 192L, 830L, 851L) */ var_1_15 = (
			32u
		);
	}


	// From: CodeObject1
	/* 391L, 146L) */ if (/* 392L, 132L, 133L) */ ((256) != (var_1_14))) {
		/* 395L, 145L) */ var_1_20 = (
			/* 398L, 144L) */ ((
				/* 399L, 142L) */ (! (
					1
				))
			) || (
				var_1_12
			))
		);
	}


	// From: CodeObject2
	/* 403L, 227L) */ if (/* 404L, 154L, 155L) */ ((/* 405L, 152L, 156L) */ ((var_1_14) / (var_1_24))) <= (var_1_17))) {
		/* 409L, 221L) */ if (/* 410L, 170L, 171L) */ ((/* 411L, 168L, 172L) */ (~ (/* 412L, 167L, 173L) */ ((var_1_26) - (var_1_27))))) < (var_1_14))) {
			/* 416L, 219L) */ if (/* 417L, 189L, 190L) */ ((/* 418L, 187L, 191L) */ ((var_1_24) <= (/* 420L, 186L, 193L) */ ((var_1_27) % (var_1_28))))) || (var_1_8))) {
				/* 424L, 217L) */ if (/* 425L, 206L, 207L) */ ((var_1_8) && (var_1_12))) {
					/* 428L, 216L) */ var_1_23 = (
						var_1_27
					);
				}
			}
		}
	} else {
		/* 432L, 226L) */ var_1_23 = (
			var_1_27
		);
	}


	// From: CodeObject3
	/* 436L, 284L) */ if (/* 437L, 240L, 241L) */ ((var_1_14) < (/* 439L, 239L, 243L) */ (min (/* 439L, 239L, 243L) */ (/* 440L, 237L, 244L) */ ((var_1_27) >> (var_1_30))) , (var_1_24)))))) {
		/* 444L, 282L) */ if (/* 445L, 259L, 260L) */ ((var_1_12) || (/* 447L, 258L, 262L) */ ((var_1_8) && (var_1_6))))) {
			/* 450L, 275L) */ var_1_29 = (
				/* 453L, 274L) */ ((
					var_1_26
				) - (
					var_1_30
				))
			);
		} else {
			/* 456L, 281L) */ var_1_29 = (
				/* 459L, 280L) */ (max (
					/* 459L, 280L) */ (
						var_1_30
					) , (
						var_1_27
					)
				))
			);
		}
	}


	// From: CodeObject4
	/* 462L, 331L) */ if (/* 463L, 290L, 291L) */ ((var_1_27) < (var_1_17))) {
		/* 466L, 325L) */ if (/* 467L, 304L, 305L) */ ((/* 468L, 299L, 306L) */ ((var_1_27) >= (var_1_30))) && (/* 471L, 303L, 309L) */ ((var_1_17) <= (/* 473L, 302L, 311L) */ (abs (var_1_14))))))) {
			/* 475L, 324L) */ var_1_32 = (
				var_1_33
			);
		}
	} else {
		/* 479L, 330L) */ var_1_32 = (
			var_1_34
		);
	}


	// From: CodeObject5
	/* 483L, 347L) */ if (var_1_19) {
		/* 485L, 345L) */ if (var_1_13) {
			/* 487L, 344L) */ var_1_35 = (
				var_1_27
			);
		}
	}


	// From: CodeObject6
	/* 492L, 357L) */ var_1_36 = (
		/* 495L, 356L) */ ((
			/* 496L, 354L) */ (abs (
				var_1_27
			))
		) - (
			var_1_30
		))
	);


	// From: CodeObject7
	/* 503L, 381L) */ if (/* 504L, 366L, 367L) */ ((var_1_28) != (/* 506L, 365L, 369L) */ ((256u) % (var_1_38))))) {
		/* 509L, 380L) */ var_1_37 = (
			var_1_11
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967295);
	assume_abort_if_not(var_1_24 != 0);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -1);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967295);
	assume_abort_if_not(var_1_28 != 0);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 6);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 4294967295);
	assume_abort_if_not(var_1_38 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_19 = var_1_19;
}

int property(void) {
	if (/* 515L, 6L, 12L, 536L, 577L, 1103L, 1392L, 49L) */ ((/* 516L, 4L, 13L, 537L, 578L, 1101L, 1393L, 47L) */ ((last_1_var_1_17) / (var_1_3))) <= (2))) {
		if (/* 522L, 22L, 29L, 542L, 583L, 1111L, 1399L, 57L) */ ((var_1_3) < (/* 524L, 21L, 31L, 544L, 585L, 1110L, 1401L, 56L) */ (min (/* 524L, 21L, 31L, 544L, 585L, 1110L, 1401L, 56L) */ (/* 525L, 19L, 32L, 545L, 586L, 1107L, 1402L, 53L) */ (~ (last_1_var_1_17))) , (last_1_var_1_14)))))) {
		} else {
			if (/* 537L, 47L, 55L, 555L, 596L, 1124L, 1414L, 70L) */ ((/* 538L, 45L, 56L, 556L, 597L, 1122L, 1415L, 68L) */ ((/* 539L, 43L, 57L, 557L, 598L, 1120L, 1416L, 66L) */ ((var_1_6) || (var_1_7))) && (var_1_8))) || (var_1_9))) {
			} else {
			}
		}
	} else {
	}
	if (/* 560L, 96L, 100L, 665L, 688L, 1170L, 1437L) */ ((last_1_var_1_1) <= (var_1_5))) {
	} else {
	}
	if (/* 583L, 131L, 135L, 779L, 797L, 1460L) */ ((var_1_5) >= (var_1_3))) {
	} else {
	}
	if (/* 601L, 164L, 174L, 857L, 878L, 1478L) */ ((var_1_10) || (/* 603L, 163L, 176L, 859L, 880L, 1480L) */ ((/* 604L, 159L, 177L, 860L, 881L, 1481L) */ (max (/* 604L, 159L, 177L, 860L, 881L, 1481L) */ (var_1_14) , (var_1_3)))) < (/* 607L, 162L, 180L, 863L, 884L, 1484L) */ (min (/* 607L, 162L, 180L, 863L, 884L, 1484L) */ (var_1_17) , (var_1_18)))))))) {
	} else {
	}
	if (/* 623L, 203L, 209L, 932L, 948L, 1500L) */ ((var_1_14) < (/* 625L, 202L, 211L, 934L, 950L, 1502L) */ ((32) / (var_1_3))))) {
		if (/* 629L, 216L, 220L, 938L, 954L, 1506L) */ ((var_1_10) || (var_1_19))) {
		}
	}
	if (/* 646L, 255L, 261L, 1025L, 1040L, 1216L, 1523L, 116L) */ ((/* 647L, 253L, 262L, 1026L, 1041L, 1214L, 1524L, 114L) */ ((last_1_var_1_18) + (last_1_var_1_17))) < (1))) {
		if (var_1_12) {
			if (last_1_var_1_10) {
			}
		}
	}
	return /* 668L) */ ((
	/* 667L) */ ((
		/* 666L) */ ((
			/* 665L) */ ((
				/* 664L) */ ((
					/* 663L) */ ((
						/* 514L, 87L, 535L, 576L, 1139L, 1391L, 85L) */ ((
							/* 515L, 6L, 12L, 536L, 577L, 1103L, 1392L, 49L) */ ((
								/* 516L, 4L, 13L, 537L, 578L, 1101L, 1393L, 47L) */ ((
									last_1_var_1_17
								) / (
									var_1_3
								))
							) <= (
								2
							))
						) ? (
							/* 521L, 81L, 541L, 582L, 1134L, 1398L, 80L) */ ((
								/* 522L, 22L, 29L, 542L, 583L, 1111L, 1399L, 57L) */ ((
									var_1_3
								) < (
									/* 524L, 21L, 31L, 544L, 585L, 1110L, 1401L, 56L) */ (min (
										/* 524L, 21L, 31L, 544L, 585L, 1110L, 1401L, 56L) */ (
											/* 525L, 19L, 32L, 545L, 586L, 1107L, 1402L, 53L) */ (~ (
												last_1_var_1_17
											))
										) , (
											last_1_var_1_14
										)
									))
								))
							) ? (
								/* 530L, 40L, 548L, 589L, 1117L, 1407L, 63L) */ ((
									var_1_1
								) == (
									/* 530L, 40L, 548L, 589L, 1117L, 1407L, 63L) */ ((unsigned char) (
										/* 533L, 39L, 551L, 592L, 1116L, 1410L, 62L) */ (min (
											/* 533L, 39L, 551L, 592L, 1116L, 1410L, 62L) */ (
												var_1_5
											) , (
												16
											)
										))
									))
								))
							) : (
								/* 536L, 79L, 554L, 595L, 1133L, 1413L, 79L) */ ((
									/* 537L, 47L, 55L, 555L, 596L, 1124L, 1414L, 70L) */ ((
										/* 538L, 45L, 56L, 556L, 597L, 1122L, 1415L, 68L) */ ((
											/* 539L, 43L, 57L, 557L, 598L, 1120L, 1416L, 66L) */ ((
												var_1_6
											) || (
												var_1_7
											))
										) && (
											var_1_8
										))
									) || (
										var_1_9
									))
								) ? (
									/* 544L, 65L, 562L, 603L, 1128L, 1421L, 74L) */ ((
										var_1_1
									) == (
										/* 544L, 65L, 562L, 603L, 1128L, 1421L, 74L) */ ((unsigned char) (
											var_1_5
										))
									))
								) : (
									/* 548L, 77L, 566L, 607L, 1132L, 1425L, 78L) */ ((
										var_1_1
									) == (
										/* 548L, 77L, 566L, 607L, 1132L, 1425L, 78L) */ ((unsigned char) (
											32
										))
									))
								))
							))
						) : (
							/* 552L, 85L, 570L, 611L, 1138L, 1429L, 84L) */ ((
								var_1_1
							) == (
								/* 552L, 85L, 570L, 611L, 1138L, 1429L, 84L) */ ((unsigned char) (
									var_1_5
								))
							))
						))
					) && (
						/* 559L, 120L, 664L, 687L, 1188L, 1436L) */ ((
							/* 560L, 96L, 100L, 665L, 688L, 1170L, 1437L) */ ((
								last_1_var_1_1
							) <= (
								var_1_5
							))
						) ? (
							/* 564L, 112L, 668L, 691L, 1181L, 1441L) */ ((
								var_1_10
							) == (
								/* 564L, 112L, 668L, 691L, 1181L, 1441L) */ ((unsigned char) (
									/* 567L, 111L, 671L, 694L, 1180L, 1444L) */ ((
										last_1_var_1_19
									) || (
										/* 570L, 110L, 673L, 696L, 1179L, 1447L) */ ((
											/* 571L, 108L, 674L, 697L, 1177L, 1448L) */ ((
												var_1_3
											) != (
												var_1_5
											))
										) || (
											var_1_11
										))
									))
								))
							))
						) : (
							/* 575L, 118L, 678L, 701L, 1187L, 1452L) */ ((
								var_1_10
							) == (
								/* 575L, 118L, 678L, 701L, 1187L, 1452L) */ ((unsigned char) (
									/* 578L, 117L, 681L, 704L, 1186L, 1455L) */ ((
										var_1_12
									) || (
										var_1_13
									))
								))
							))
						))
					))
				) && (
					/* 582L, 151L, 778L, 796L, 1459L) */ ((
						/* 583L, 131L, 135L, 779L, 797L, 1460L) */ ((
							var_1_5
						) >= (
							var_1_3
						))
					) ? (
						/* 586L, 143L, 782L, 800L, 1463L) */ ((
							var_1_14
						) == (
							/* 586L, 143L, 782L, 800L, 1463L) */ ((signed long int) (
								/* 589L, 142L, 785L, 803L, 1466L) */ (min (
									/* 589L, 142L, 785L, 803L, 1466L) */ (
										last_1_var_1_14
									) , (
										var_1_1
									)
								))
							))
						))
					) : (
						/* 593L, 149L, 789L, 807L, 1470L) */ ((
							var_1_14
						) == (
							/* 593L, 149L, 789L, 807L, 1470L) */ ((signed long int) (
								/* 596L, 148L, 792L, 810L, 1473L) */ ((
									32
								) + (
									var_1_1
								))
							))
						))
					))
				))
			) && (
				/* 600L, 194L, 856L, 877L, 1477L) */ ((
					/* 601L, 164L, 174L, 857L, 878L, 1478L) */ ((
						var_1_10
					) || (
						/* 603L, 163L, 176L, 859L, 880L, 1480L) */ ((
							/* 604L, 159L, 177L, 860L, 881L, 1481L) */ (max (
								/* 604L, 159L, 177L, 860L, 881L, 1481L) */ (
									var_1_14
								) , (
									var_1_3
								)
							))
						) < (
							/* 607L, 162L, 180L, 863L, 884L, 1484L) */ (min (
								/* 607L, 162L, 180L, 863L, 884L, 1484L) */ (
									var_1_17
								) , (
									var_1_18
								)
							))
						))
					))
				) ? (
					/* 610L, 188L, 866L, 887L, 1487L) */ ((
						var_1_15
					) == (
						/* 610L, 188L, 866L, 887L, 1487L) */ ((unsigned long int) (
							/* 613L, 187L, 869L, 890L, 1490L) */ (max (
								/* 613L, 187L, 869L, 890L, 1490L) */ (
									1u
								) , (
									var_1_17
								)
							))
						))
					))
				) : (
					/* 616L, 192L, 872L, 893L, 1493L) */ ((
						var_1_15
					) == (
						/* 616L, 192L, 872L, 893L, 1493L) */ ((unsigned long int) (
							32u
						))
					))
				))
			))
		) && (
			/* 622L, 230L, 931L, 947L, 1499L) */ ((
				/* 623L, 203L, 209L, 932L, 948L, 1500L) */ ((
					var_1_14
				) < (
					/* 625L, 202L, 211L, 934L, 950L, 1502L) */ ((
						32
					) / (
						var_1_3
					))
				))
			) ? (
				/* 628L, 228L, 937L, 953L, 1505L) */ ((
					/* 629L, 216L, 220L, 938L, 954L, 1506L) */ ((
						var_1_10
					) || (
						var_1_19
					))
				) ? (
					/* 632L, 226L, 941L, 957L, 1509L) */ ((
						var_1_17
					) == (
						/* 632L, 226L, 941L, 957L, 1509L) */ ((unsigned long int) (
							var_1_18
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
		/* 640L, 240L, 981L, 989L, 1517L) */ ((
			var_1_18
		) == (
			/* 640L, 240L, 981L, 989L, 1517L) */ ((unsigned short int) (
				var_1_1
			))
		))
	))
) && (
	/* 645L, 281L, 1024L, 1039L, 1226L, 1522L, 126L) */ ((
		/* 646L, 255L, 261L, 1025L, 1040L, 1216L, 1523L, 116L) */ ((
			/* 647L, 253L, 262L, 1026L, 1041L, 1214L, 1524L, 114L) */ ((
				last_1_var_1_18
			) + (
				last_1_var_1_17
			))
		) < (
			1
		))
	) ? (
		/* 653L, 279L, 1030L, 1045L, 1225L, 1530L, 125L) */ ((
			var_1_12
		) ? (
			/* 655L, 277L, 1032L, 1047L, 1224L, 1532L, 124L) */ ((
				last_1_var_1_10
			) ? (
				/* 658L, 275L, 1034L, 1049L, 1223L, 1535L, 123L) */ ((
					var_1_19
				) == (
					/* 658L, 275L, 1034L, 1049L, 1223L, 1535L, 123L) */ ((unsigned char) (
						var_1_11
					))
				))
			) : (
				1
			))
		) : (
			1
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
