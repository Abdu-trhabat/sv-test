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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch65Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 4;
unsigned short int var_1_2 = 16;
unsigned short int var_1_3 = 100;
unsigned short int var_1_4 = 10;
signed short int var_1_5 = 256;
signed short int var_1_6 = -10;
signed short int var_1_7 = -25;
unsigned short int var_1_8 = 64;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
unsigned short int var_1_11 = 256;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 64;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
signed char var_1_16 = 50;
signed char var_1_19 = -100;
double var_1_20 = 100000000.8;
double var_1_21 = 15.125;
double var_1_22 = 99.22;
signed long int var_1_23 = -16;
unsigned char var_1_24 = 1;
signed char var_1_25 = 10;
signed char var_1_26 = 16;
unsigned char var_1_27 = 0;
double var_1_28 = 5.5;
signed long int var_1_29 = 50;
signed long int var_1_30 = 16;
signed char var_1_31 = 4;
signed char var_1_32 = 64;
unsigned short int var_1_33 = 16;
unsigned char var_1_34 = 1;
unsigned short int var_1_35 = 1;
float var_1_36 = 9.8;
float var_1_37 = 1000000000000.2;
float var_1_38 = 128.75;
unsigned char var_1_39 = 4;
unsigned char var_1_40 = 32;
signed long int var_1_41 = -5;
double var_1_42 = 49.6;
double var_1_43 = 49.6;
double var_1_44 = 8.2;
signed long int var_1_45 = -2;
unsigned char var_1_46 = 1;
unsigned long int var_1_47 = 16;
signed long int var_1_49 = -25;
unsigned long int var_1_50 = 1275815169;
unsigned long int var_1_51 = 1483937619;
signed char last_1_var_1_16 = 50;
signed long int last_1_var_1_23 = -16;
unsigned char last_1_var_1_24 = 1;
void initially(void) {
}
void step(void) {
                                            var_1_24 = (
                                            ((
                                             ((
    last_1_var_1_16
   ) <= (
                                              ((
     var_1_25
    ) - (
     var_1_26
    ))
   ))
  ) && (
   var_1_27
  ))
 );
             if ( ((1000000.4f) != (var_1_38))) {
              if ( ((var_1_38) > (var_1_36))) {
               var_1_42 = (
                ((((( var_1_43 )) > (( var_1_44 ))) ? (( var_1_43 )) : (( var_1_44 ))))
   );
  }
 }
                                      if (last_1_var_1_24) {
                                       if (last_1_var_1_24) {
                                        var_1_8 = (
                                         ((((( (( var_1_11 ) + ( var_1_12 )) )) > (( var_1_13 ))) ? (( (( var_1_11 ) + ( var_1_12 )) )) : (( var_1_13 ))))
   );
  }
 }
            var_1_39 = (
  var_1_40
 );
 signed long int stepLocal_1 = ((var_1_8) + ( ((var_1_6) ^ (var_1_7))));
                               if ( ((var_1_5) > (stepLocal_1))) {
                                var_1_14 = (
                                 ((
    var_1_24
   ) || (
    var_1_15
   ))
  );
 }
            var_1_29 = (
  var_1_30
 );
            var_1_31 = (
  var_1_32
 );
             if ( ((var_1_29) != (var_1_31))) {
              if ( (( ((-5) | (var_1_30))) <= (var_1_32))) {
               var_1_41 = (
                ((((( var_1_39 )) > (( var_1_33 ))) ? (( var_1_39 )) : (( var_1_33 ))))
   );
  }
 }
 unsigned char stepLocal_0 = ((var_1_2) <= (var_1_3));
                               if ( ((stepLocal_0) || ( ((var_1_4) > (4))))) {
                                var_1_1 = (
                                 ((((( (( var_1_5 ) + ( (( var_1_6 ) + ( var_1_7 )) )) )) > (( -100 ))) ? (( (( var_1_5 ) + ( (( var_1_6 ) + ( var_1_7 )) )) )) : (( -100 ))))
  );
 } else {
                                var_1_1 = (
   var_1_7
  );
 }
             if ( ((var_1_42) < (var_1_43))) {
              if ( (( ((var_1_49) | (var_1_39))) > (var_1_35))) {
               var_1_47 = (
                ((((( var_1_40 )) > (( var_1_35 ))) ? (( var_1_40 )) : (( var_1_35 ))))
   );
  } else {
               if (var_1_46) {
                if ( ((var_1_42) >= (var_1_44))) {
                 var_1_47 = (
                  ((
                   ((
        var_1_50
       ) + (
                    ((((( 1530535536u )) < (( var_1_51 ))) ? (( 1530535536u )) : (( var_1_51 ))))
       ))
      ) - (
                   ((((( var_1_33 )) > (( var_1_40 ))) ? (( var_1_33 )) : (( var_1_40 ))))
      ))
     );
    }
   } else {
                var_1_47 = (
     var_1_50
    );
   }
  }
 } else {
              var_1_47 = (
   var_1_39
  );
 }
                                var_1_20 = (
                                 ((
   var_1_21
  ) - (
                                  ((
    var_1_22
   ) + (
    1.5
   ))
  ))
 );
                                  var_1_28 = (
  var_1_21
 );
                                if ( (( (( (((((last_1_var_1_23)) > ((var_1_5))) ? ((last_1_var_1_23)) : ((var_1_5))))) | (var_1_6))) >= (var_1_8))) {
                                 var_1_23 = (
                                  ((
    5
   ) - (
    var_1_12
   ))
  );
 } else {
                                 var_1_23 = (
                                  ((((( var_1_11 )) > (( var_1_1 ))) ? (( var_1_11 )) : (( var_1_1 ))))
  );
 }
 unsigned char stepLocal_3 = var_1_14;
 signed short int stepLocal_2 = var_1_1;
                                if ( ((stepLocal_2) < (var_1_23))) {
                                 if ( (( (! ( ((var_1_10) || (var_1_9))))) && (stepLocal_3))) {
                                  if ( (( (((((2.75f)) > (( (((((var_1_20)) < ((999999.95f))) ? ((var_1_20)) : ((999999.95f))))))) ? ((2.75f)) : (( (((((var_1_20)) < ((999999.95f))) ? ((var_1_20)) : ((999999.95f))))))))) != (var_1_20))) {
                                   var_1_16 = (
     10
    );
   } else {
                                   var_1_16 = (
     var_1_19
    );
   }
  } else {
                                  var_1_16 = (
    var_1_19
   );
  }
 } else {
                                 var_1_16 = (
   100
  );
 }
            if (var_1_34) {
             if ( ((var_1_30) < (var_1_32))) {
              var_1_33 = (
               ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))
   );
  }
 } else {
             if ( (( (((((var_1_36)) < ((var_1_37))) ? ((var_1_36)) : ((var_1_37))))) < (var_1_38))) {
              var_1_33 = (
    var_1_35
   );
  }
 }
             if ( ((var_1_34) && (var_1_46))) {
              var_1_45 = (
               ((((( (( var_1_39 ) + ( var_1_40 )) )) > (( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) ))) ? (( (( var_1_39 ) + ( var_1_40 )) )) : (( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) ))))
  );
 } else {
              var_1_45 = (
               ((
                ((
     var_1_32
    ) + (
     var_1_33
    ))
   ) + (
    var_1_40
   ))
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65535);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -16383);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -8191);
 assume_abort_if_not(var_1_6 <= 8192);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -8191);
 assume_abort_if_not(var_1_7 <= 8191);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -127);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -1);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483647);
 assume_abort_if_not(var_1_30 <= 2147483646);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -127);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 65534);
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= -2147483648);
 assume_abort_if_not(var_1_49 <= 2147483647);
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 1073741823);
 assume_abort_if_not(var_1_50 <= 2147483647);
 var_1_51 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_51 >= 1073741824);
 assume_abort_if_not(var_1_51 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_23 = var_1_23;
 last_1_var_1_24 = var_1_24;
}
int property(void) {
 if ( (( ((var_1_2) <= (var_1_3))) || ( ((var_1_4) > (4))))) {
 } else {
 }
 if (last_1_var_1_24) {
  if (last_1_var_1_24) {
  }
 }
 if ( ((var_1_5) > ( ((var_1_8) + ( ((var_1_6) ^ (var_1_7))))))) {
 }
 if ( ((var_1_1) < (var_1_23))) {
  if ( (( (! ( ((var_1_10) || (var_1_9))))) && (var_1_14))) {
   if ( (( (((((2.75f)) > (( (((((var_1_20)) < ((999999.95f))) ? ((var_1_20)) : ((999999.95f))))))) ? ((2.75f)) : (( (((((var_1_20)) < ((999999.95f))) ? ((var_1_20)) : ((999999.95f))))))))) != (var_1_20))) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( (( (( (((((last_1_var_1_23)) > ((var_1_5))) ? ((last_1_var_1_23)) : ((var_1_5))))) | (var_1_6))) >= (var_1_8))) {
 } else {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                  ((
                                           ((
                                                ((
                                                 ((
          var_1_2
         ) <= (
          var_1_3
         ))
        ) || (
                                                 ((
          var_1_4
         ) > (
          4
         ))
        ))
       ) ? (
                                            ((
         var_1_1
        ) == (
                                             ((signed short int) (
                                              ((((( (( var_1_5 ) + ( (( var_1_6 ) + ( var_1_7 )) )) )) > (( -100 ))) ? (( (( var_1_5 ) + ( (( var_1_6 ) + ( var_1_7 )) )) )) : (( -100 ))))
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((signed short int) (
          var_1_7
         ))
        ))
       ))
      ) && (
                                                  ((
        last_1_var_1_24
       ) ? (
                                                   ((
         last_1_var_1_24
        ) ? (
                                                    ((
          var_1_8
         ) == (
                                                     ((unsigned short int) (
                                                      ((((( (( var_1_11 ) + ( var_1_12 )) )) > (( var_1_13 ))) ? (( (( var_1_11 ) + ( var_1_12 )) )) : (( var_1_13 ))))
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
                                          ((
                                                ((
        var_1_5
       ) > (
                                                 ((
         var_1_8
        ) + (
                                                  ((
          var_1_6
         ) ^ (
          var_1_7
         ))
        ))
       ))
      ) ? (
                                           ((
        var_1_14
       ) == (
                                            ((unsigned char) (
                                             ((
          var_1_24
         ) || (
          var_1_15
         ))
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_1
      ) < (
       var_1_23
      ))
     ) ? (
                                           ((
                                                  ((
                                                   (! (
                                                    ((
          var_1_10
         ) || (
          var_1_9
         ))
        ))
       ) && (
        var_1_14
       ))
      ) ? (
                                            ((
                                                   ((
                                                    ((((( 2.75f )) > (( ((((( var_1_20 )) < (( 999999.95f ))) ? (( var_1_20 )) : (( 999999.95f )))) ))) ? (( 2.75f )) : (( ((((( var_1_20 )) < (( 999999.95f ))) ? (( var_1_20 )) : (( 999999.95f )))) ))))
        ) != (
         var_1_20
        ))
       ) ? (
                                             ((
         var_1_16
        ) == (
                                              ((signed char) (
          10
         ))
        ))
       ) : (
                                             ((
         var_1_16
        ) == (
                                              ((signed char) (
          var_1_19
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_16
       ) == (
                                             ((signed char) (
         var_1_19
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_16
      ) == (
                                            ((signed char) (
        100
       ))
      ))
     ))
    ))
   ) && (
                                         ((
     var_1_20
    ) == (
                                          ((double) (
                                           ((
       var_1_21
      ) - (
                                            ((
        var_1_22
       ) + (
        1.5
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((
                                                 ((((( last_1_var_1_23 )) > (( var_1_5 ))) ? (( last_1_var_1_23 )) : (( var_1_5 ))))
     ) | (
      var_1_6
     ))
    ) >= (
     var_1_8
    ))
   ) ? (
                                         ((
     var_1_23
    ) == (
                                          ((signed long int) (
                                           ((
       5
      ) - (
       var_1_12
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_23
    ) == (
                                          ((signed long int) (
                                           ((((( var_1_11 )) > (( var_1_1 ))) ? (( var_1_11 )) : (( var_1_1 ))))
     ))
    ))
   ))
  ))
 ) && (
                                                     ((
   var_1_24
  ) == (
                                                      ((unsigned char) (
                                                       ((
                                                        ((
      last_1_var_1_16
     ) <= (
                                                         ((
       var_1_25
      ) - (
       var_1_26
      ))
     ))
    ) && (
     var_1_27
    ))
   ))
  ))
 ))
) && (
                                        ((
  var_1_28
 ) == (
                                         ((double) (
   var_1_21
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
