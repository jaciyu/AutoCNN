
// AutoCNNView.cpp : CAutoCNNView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CAutoCNNView 构造/析构

CAutoCNNView::CAutoCNNView()
	: CFormView(IDD_AUTOCNN_FORM)
{
	// TODO: 在此处添加构造代码

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
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

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


// CAutoCNNView 诊断

#ifdef _DEBUG
void CAutoCNNView::AssertValid() const
{
	CFormView::AssertValid();
}

void CAutoCNNView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CAutoCNNDoc* CAutoCNNView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAutoCNNDoc)));
	return (CAutoCNNDoc*)m_pDocument;
}
#endif //_DEBUG


// CAutoCNNView 消息处理程序
