// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the QPOASES_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// QPOASES_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef QPOASES_EXPORTS
#define QPOASES_API __declspec(dllexport)
#else
#define QPOASES_API __declspec(dllimport)
#endif

//// This class is exported from the dll
//class QPOASES_API CqpOASES {
//public:
//	CqpOASES(void);
//	// TODO: add your methods here.
//};
//
//extern QPOASES_API int nqpOASES;
//
//QPOASES_API int fnqpOASES(void);
