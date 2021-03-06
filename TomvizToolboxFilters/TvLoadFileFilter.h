/*
 * Your License or Copyright can go here
 */

#ifndef _tvloadfilefilter_h_
#define _tvloadfilefilter_h_

#include "SIMPLib/Common/SIMPLibSetGetMacros.h"
#include "SIMPLib/Filtering/AbstractFilter.h"
#include "SIMPLib/SIMPLib.h"

/**
 * @brief The TvLoadFileFilter class. See [Filter documentation](@ref
 * tvloadfilefilter) for details.
 */
class TvLoadFileFilter : public AbstractFilter
{
  Q_OBJECT

public:
  SIMPL_SHARED_POINTERS(TvLoadFileFilter)
  SIMPL_STATIC_NEW_MACRO(TvLoadFileFilter)
  SIMPL_TYPE_MACRO_SUPER(TvLoadFileFilter, AbstractFilter)

  virtual ~TvLoadFileFilter();

  SIMPL_FILTER_PARAMETER(QString, SocketFile)
  Q_PROPERTY(QString SocketFile READ getSocketFile WRITE setSocketFile)

  /**
   * @brief getCompiledLibraryName Reimplemented from @see AbstractFilter class
   */
  virtual const QString getCompiledLibraryName();

  /**
   * @brief getBrandingString Returns the branding string for the filter, which
   * is a tag
   * used to denote the filter's association with specific plugins
   * @return Branding string
  */
  virtual const QString getBrandingString();

  /**
   * @brief getFilterVersion Returns a version string for this filter. Default
   * value is an empty string.
   * @return
   */
  virtual const QString getFilterVersion();

  /**
   * @brief newFilterInstance Reimplemented from @see AbstractFilter class
   */
  virtual AbstractFilter::Pointer newFilterInstance(bool copyFilterParameters);

  /**
   * @brief getGroupName Reimplemented from @see AbstractFilter class
   */
  virtual const QString getGroupName();

  /**
   * @brief getSubGroupName Reimplemented from @see AbstractFilter class
   */
  virtual const QString getSubGroupName();

  /**
   * @brief getHumanLabel Reimplemented from @see AbstractFilter class
   */
  virtual const QString getHumanLabel();

  /**
   * @brief setupFilterParameters Reimplemented from @see AbstractFilter class
   */
  virtual void setupFilterParameters();

  /**
   * @brief execute Reimplemented from @see AbstractFilter class
   */
  virtual void execute();

  /**
  * @brief preflight Reimplemented from @see AbstractFilter class
  */
  virtual void preflight();

signals:
  /**
   * @brief updateFilterParameters Emitted when the Filter requests all the
   * latest Filter parameters
   * be pushed from a user-facing control (such as a widget)
   * @param filter Filter instance pointer
   */
  void updateFilterParameters(AbstractFilter* filter);

  /**
   * @brief parametersChanged Emitted when any Filter parameter is changed
   * internally
   */
  void parametersChanged();

  /**
   * @brief preflightAboutToExecute Emitted just before calling dataCheck()
   */
  void preflightAboutToExecute();

  /**
   * @brief preflightExecuted Emitted just after calling dataCheck()
   */
  void preflightExecuted();

protected:
  TvLoadFileFilter();

  /**
  * @brief dataCheck Checks for the appropriate parameter values and
  * availability of arrays
  */
  void dataCheck();

  /**
  * @brief Initializes all the private instance variables.
  */
  void initialize();

private:
  TvLoadFileFilter(const TvLoadFileFilter&); // Copy Constructor Not Implemented
  void operator=(const TvLoadFileFilter&);   // Operator '=' Not Implemented
};

#endif /* _TvLoadFileFilter_H_ */
