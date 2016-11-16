
// AutoCNNView.h : CAutoCNNView 类的接口
//

#pragma once


class CAutoCNNView : public CFormView
{
protected: // 仅从序列化创建
	CAutoCNNView();
	DECLARE_DYNCREATE(CAutoCNNView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AUTOCNN_FORM };
#endif

// 特性
public:
	CAutoCNNDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CAutoCNNView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // AutoCNNView.cpp 中的调试版本
inline CAutoCNNDoc* CAutoCNNView::GetDocument() const
   { return reinterpret_cast<CAutoCNNDoc*>(m_pDocument); }
#endif

