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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch177Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 10;
float var_1_2 = 10.5;
float var_1_3 = -0.6;
unsigned long int var_1_4 = 500;
unsigned long int var_1_5 = 4;
unsigned long int var_1_6 = 256;
signed long int var_1_7 = -5;
signed long int var_1_9 = 5;
signed long int var_1_10 = 256;
signed long int var_1_11 = 32;
unsigned char var_1_12 = 0;
double var_1_13 = 0.2;
double var_1_14 = 4.4;
unsigned char var_1_15 = 1;
unsigned long int var_1_16 = 4;
unsigned long int var_1_17 = 4187267237;
unsigned long int var_1_18 = 3893896959;
unsigned short int var_1_19 = 1;
unsigned short int var_1_20 = 100;
unsigned short int var_1_21 = 10000;
unsigned short int var_1_22 = 256;
unsigned short int var_1_23 = 32;
unsigned short int var_1_24 = 2;
unsigned short int var_1_25 = 2;
unsigned short int var_1_26 = 50;
unsigned char var_1_27 = 1;
signed long int var_1_28 = -1;
signed long int var_1_29 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
double var_1_37 = 7.5;
double var_1_38 = 199.05;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 4;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
signed char var_1_43 = -16;
unsigned char var_1_44 = 25;
signed char var_1_45 = 4;
signed char var_1_46 = 100;
unsigned long int var_1_47 = 2;
unsigned short int var_1_48 = 16;
unsigned short int var_1_49 = 59233;
void initially(void) {
}
void step(void) {
                  if ( (( ((var_1_28) - (var_1_29))) <= ( (~ (var_1_16))))) {
                   var_1_27 = (
   var_1_31
  );
 } else {
                   var_1_27 = (
                    ((
    var_1_31
   ) && (
    var_1_32
   ))
  );
 }
                  if ( ((500) <= ( ((256) | (var_1_29))))) {
                   if ( (( ((var_1_29) ^ (var_1_28))) != (var_1_1))) {
                    if (var_1_32) {
                     var_1_33 = (
                      ((
      var_1_12
     ) && (
                       ((
       var_1_35
      ) || (
       var_1_36
      ))
     ))
    );
   } else {
                     var_1_33 = (
     var_1_36
    );
   }
  } else {
                    var_1_33 = (
    var_1_35
   );
  }
 }
                  var_1_37 = (
  var_1_38
 );
                   var_1_39 = (
  var_1_40
 );
                   if ( ((-5) <= (var_1_7))) {
                    var_1_41 = (
                     ((
                      ((
     var_1_35
    ) && (
     var_1_36
    ))
   ) && (
    var_1_42
   ))
  );
 }
                   if ( ((var_1_40) > ( ((var_1_19) / (var_1_44))))) {
                    var_1_43 = (
                     ((
    var_1_45
   ) - (
    var_1_46
   ))
  );
 } else {
                    var_1_43 = (
   var_1_45
  );
 }
                   if (var_1_12) {
                    var_1_47 = (
                     ((
    2u
   ) + (
    var_1_46
   ))
  );
 }
                   if ( ((var_1_1) < ( ((var_1_46) | (var_1_7))))) {
                    var_1_48 = (
                     ((((( var_1_46 )) > (( var_1_44 ))) ? (( var_1_46 )) : (( var_1_44 ))))
  );
 } else {
                    if (var_1_31) {
                     if (var_1_42) {
                      var_1_48 = (
                       ((((( ((((( var_1_44 )) < (( var_1_46 ))) ? (( var_1_44 )) : (( var_1_46 )))) )) < (( var_1_24 ))) ? (( ((((( var_1_44 )) < (( var_1_46 ))) ? (( var_1_44 )) : (( var_1_46 )))) )) : (( var_1_24 ))))
    );
   } else {
                      var_1_48 = (
                       (((((( var_1_49 ) - ( var_1_24 ))) < 0 ) ? -((( var_1_49 ) - ( var_1_24 ))) : ((( var_1_49 ) - ( var_1_24 )))))
    );
   }
  } else {
                     if (var_1_36) {
                      var_1_48 = (
     var_1_40
    );
   } else {
                      var_1_48 = (
     var_1_44
    );
   }
  }
 }
                              if ( ((var_1_2) < (var_1_3))) {
                               var_1_1 = (
                                ((
    3690899434u
   ) - (
                                 ((
     var_1_4
    ) + (
                                  ((((( var_1_5 )) > (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
    ))
   ))
  );
 } else {
                               var_1_1 = (
   var_1_5
  );
 }
                               if ( (( (( ((var_1_13) - (9.75))) / ( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))) > (var_1_3))) {
                                var_1_12 = (
   var_1_15
  );
 }
                               if ( ((var_1_2) <= ( (- ( (- (var_1_14))))))) {
                                if ( ((var_1_9) < (var_1_6))) {
                                 var_1_16 = (
                                  ((
                                   ((((( var_1_17 )) > (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
    ) - (
     var_1_4
    ))
   );
  }
 } else {
                                if ( ((var_1_2) != (var_1_14))) {
                                 var_1_16 = (
    var_1_11
   );
  } else {
                                 var_1_16 = (
    var_1_17
   );
  }
 }
                               var_1_19 = (
                                ((
                                 ((
    var_1_20
   ) + (
                                  ((
     var_1_21
    ) - (
     var_1_22
    ))
   ))
  ) + (
   var_1_23
  ))
 );
                               if ( (( ((var_1_22) < (var_1_18))) || (var_1_15))) {
                                var_1_24 = (
                                 ((((( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) )) < (( var_1_23 ))) ? (( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) )) : (( var_1_23 ))))
  );
 } else {
                                var_1_24 = (
   var_1_23
  );
 }
 unsigned char stepLocal_0 = var_1_12;
                              if ( ((stepLocal_0) || ( ((0) <= (var_1_5))))) {
                               var_1_7 = (
                                ((
    var_1_5
   ) + (
    var_1_6
   ))
  );
 } else {
                               var_1_7 = (
                                ((
                                 ((
                                  ((
      var_1_10
     ) + (
      var_1_11
     ))
    ) + (
     var_1_5
    ))
   ) - (
    var_1_4
   ))
  );
 }
 unsigned long int stepLocal_2 = 32u;
 signed long int stepLocal_1 = var_1_7;
                               if ( ((stepLocal_2) > (var_1_11))) {
                                if ( ((stepLocal_1) > (var_1_1))) {
                                 var_1_26 = (
    var_1_23
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1073741824);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1073741823);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 536870912);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 536870911);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 assume_abort_if_not(var_1_14 != 0.0F);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967294);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 2147483647);
 assume_abort_if_not(var_1_18 <= 4294967294);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 16384);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 8191);
 assume_abort_if_not(var_1_21 <= 16383);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 8191);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 65534);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -1);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 0);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 255);
 assume_abort_if_not(var_1_44 != 0);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= -1);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 32767);
 assume_abort_if_not(var_1_49 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((var_1_2) < (var_1_3))) {
 } else {
 }
 if ( ((var_1_12) || ( ((0) <= (var_1_5))))) {
 } else {
 }
 if ( (( (( ((var_1_13) - (9.75))) / ( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))) > (var_1_3))) {
 }
 if ( ((var_1_2) <= ( (- ( (- (var_1_14))))))) {
  if ( ((var_1_9) < (var_1_6))) {
  }
 } else {
  if ( ((var_1_2) != (var_1_14))) {
  } else {
  }
 }
 if ( (( ((var_1_22) < (var_1_18))) || (var_1_15))) {
 } else {
 }
 if ( ((32u) > (var_1_11))) {
  if ( ((var_1_7) > (var_1_1))) {
  }
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                         ((
                                             ((
        var_1_2
       ) < (
        var_1_3
       ))
      ) ? (
                                          ((
        var_1_1
       ) == (
                                           ((unsigned long int) (
                                            ((
          3690899434u
         ) - (
                                             ((
           var_1_4
          ) + (
                                              ((((( var_1_5 )) > (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
          ))
         ))
        ))
       ))
      ) : (
                                          ((
        var_1_1
       ) == (
                                           ((unsigned long int) (
         var_1_5
        ))
       ))
      ))
     ) && (
                                         ((
                                               ((
        var_1_12
       ) || (
                                                ((
         0
        ) <= (
         var_1_5
        ))
       ))
      ) ? (
                                          ((
        var_1_7
       ) == (
                                           ((signed long int) (
                                            ((
          var_1_5
         ) + (
          var_1_6
         ))
        ))
       ))
      ) : (
                                          ((
        var_1_7
       ) == (
                                           ((signed long int) (
                                            ((
                                             ((
                                              ((
            var_1_10
           ) + (
            var_1_11
           ))
          ) + (
           var_1_5
          ))
         ) - (
          var_1_4
         ))
        ))
       ))
      ))
     ))
    ) && (
                                         ((
                                              ((
                                               ((
                                                ((
         var_1_13
        ) - (
         9.75
        ))
       ) / (
                                                ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))
       ))
      ) > (
       var_1_3
      ))
     ) ? (
                                          ((
       var_1_12
      ) == (
                                           ((unsigned char) (
        var_1_15
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_2
     ) <= (
                                                 (- (
                                                  (- (
        var_1_14
       ))
      ))
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_9
      ) < (
       var_1_6
      ))
     ) ? (
                                           ((
       var_1_16
      ) == (
                                            ((unsigned long int) (
                                             ((
                                              ((((( var_1_17 )) > (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
        ) - (
         var_1_4
        ))
       ))
      ))
     ) : (
      1
     ))
    ) : (
                                          ((
                                                 ((
       var_1_2
      ) != (
       var_1_14
      ))
     ) ? (
                                           ((
       var_1_16
      ) == (
                                            ((unsigned long int) (
        var_1_11
       ))
      ))
     ) : (
                                           ((
       var_1_16
      ) == (
                                            ((unsigned long int) (
        var_1_17
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_19
   ) == (
                                         ((unsigned short int) (
                                          ((
                                           ((
       var_1_20
      ) + (
                                            ((
        var_1_21
       ) - (
        var_1_22
       ))
      ))
     ) + (
      var_1_23
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
                                               ((
     var_1_22
    ) < (
     var_1_18
    ))
   ) || (
    var_1_15
   ))
  ) ? (
                                        ((
    var_1_24
   ) == (
                                         ((unsigned short int) (
                                          ((((( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) )) < (( var_1_23 ))) ? (( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) )) : (( var_1_23 ))))
    ))
   ))
  ) : (
                                        ((
    var_1_24
   ) == (
                                         ((unsigned short int) (
     var_1_23
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   32u
  ) > (
   var_1_11
  ))
 ) ? (
                                       ((
                                              ((
    var_1_7
   ) > (
    var_1_1
   ))
  ) ? (
                                        ((
    var_1_26
   ) == (
                                         ((unsigned short int) (
     var_1_23
    ))
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
