
// AutoCNNView.cpp : CAutoCNNView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "AutoCNN.h"
#endif

#include "AutoCNNDoc.h"
#include "AutoCNNView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAutoCNNView

IMPLEMENT_DYNCREATE(CAutoCNNView, CFormView)

BEGIN_MESSAGE_MAP(CAutoCNNView, CFormView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CAutoCNNView ����/����

CAutoCNNView::CAutoCNNView()
	: CFormView(IDD_AUTOCNN_FORM)
{
	// TODO: �ڴ˴���ӹ������

}

CAutoCNNView::~CAutoCNNView()
{
}

void CAutoCNNView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL CAutoCNNView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CFormView::PreCreateWindow(cs);
}

void CAutoCNNView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}

void CAutoCNNView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CAutoCNNView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CAutoCNNView ���

#ifdef _DEBUG
void CAutoCNNView::AssertValid() const
{
	CFormView::AssertValid();
}

void CAutoCNNView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CAutoCNNDoc* CAutoCNNView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAutoCNNDoc)));
	return (CAutoCNNDoc*)m_pDocument;
}
#endif //_DEBUG


// CAutoCNNView ��Ϣ�������
