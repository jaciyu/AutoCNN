
// AutoCNNView.h : CAutoCNNView ��Ľӿ�
//

#pragma once


class CAutoCNNView : public CFormView
{
protected: // �������л�����
	CAutoCNNView();
	DECLARE_DYNCREATE(CAutoCNNView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AUTOCNN_FORM };
#endif

// ����
public:
	CAutoCNNDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CAutoCNNView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // AutoCNNView.cpp �еĵ��԰汾
inline CAutoCNNDoc* CAutoCNNView::GetDocument() const
   { return reinterpret_cast<CAutoCNNDoc*>(m_pDocument); }
#endif

